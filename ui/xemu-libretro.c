/*
 * xemu libretro core
 * ------------------
 * Libretro frontend shim for xemu (original Xbox emulator, QEMU-based).
 *
 * Architecture (mirrors upstream ui/xemu.c, which this file replaces):
 *   - QEMU/xemu machine runs on its own thread (qemu_main_thread), exactly
 *     like upstream, where main() spawns qemu_main().
 *   - The libretro thread (retro_run) takes the role of upstream's main
 *     loop: it pumps input into the bound ControllerState and presents the
 *     latest NV2A framebuffer.
 *   - Video, first target: GL readback. xemu's NV2A renderer draws into its
 *     own (hidden-window) GL context; we glGetTexImage the framebuffer
 *     surface and hand it to the frontend as XRGB8888. Zero-copy HW render
 *     is a documented follow-up (requires context sharing with the
 *     frontend's context).
 *   - Audio: the MCPX APU pushes into the glue ring; retro_run drains it
 *     into audio_batch_cb.
 *     OS (works fine inside RetroArch's process). Routing through
 *     audio_batch_cb is a follow-up.
 *
 * Target: x64 Windows (MinGW-w64 / MSYS2 UCRT64). POSIX bits are guarded.
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <stdint.h>
#include <stdbool.h>

#include "libretro.h"

/* ---- xemu / QEMU headers ------------------------------------------------ */
#include "qemu/osdep.h"
#include "qemu/thread.h"
#include "qemu/atomic.h"
#include "qemu/main-loop.h"
#include "system/system.h"
#include "system/runstate.h"

#include <epoxy/gl.h>

#include "ui/xemu-settings.h"
#include "ui/xemu-input.h"
#include "hw/xbox/nv2a/nv2a.h"

#include "xemu-libretro-glue.h"

/* ========================================================================= */
/* Libretro state                                                            */
/* ========================================================================= */

static retro_environment_t        environ_cb;
static retro_video_refresh_t      video_cb;
static retro_audio_sample_batch_t audio_batch_cb;
static retro_input_poll_t         input_poll_cb;
static retro_input_state_t        input_state_cb;
static retro_log_printf_t         log_cb;

#define XEMU_LR_MAX_W 1920
#define XEMU_LR_MAX_H 1080
#define XEMU_LR_DEF_W 640
#define XEMU_LR_DEF_H 480

static uint32_t *fb_pixels;             /* XRGB8888 readback buffer         */
static unsigned  fb_w = XEMU_LR_DEF_W;
static unsigned  fb_h = XEMU_LR_DEF_H;

static bool      emu_started;
static bool      emu_failed;
static QemuThread qemu_thread;
static char      content_path[4096];
static char      system_dir[4096];

/* Virtual controller injected into xemu's input layer (port 1 / Duke). */
static ControllerState lr_pad0;

static void fallback_log(enum retro_log_level level, const char *fmt, ...)
{
    (void)level;
    va_list va;
    va_start(va, fmt);
    vfprintf(stderr, fmt, va);
    va_end(va);
}

/* ========================================================================= */
/* Core options                                                              */
/* ========================================================================= */

static const struct retro_variable core_vars[] = {
    { "xemu_bootrom",    "MCPX boot ROM (system dir); "
                         "mcpx_1.0.bin|mcpx.bin|MCPX_1.0.bin|boot_rom.bin" },
    { "xemu_flashrom",   "Flash ROM / BIOS (system dir); "
                         "Complex_4627.bin|Complex_4627_v1.03.bin|"
                         "complex_4627.bin|cerbios.bin|Cerbios.bin|"
                         "bios.bin|xbox_bios.bin|Complex.bin" },
    { "xemu_eeprom",     "EEPROM image (system dir); "
                         "xbox_eeprom.bin|eeprom.bin|EEPROM.bin" },
    { "xemu_hdd",        "HDD image (system dir); "
                         "xbox_hdd.qcow2|xbox_hdd_8gb.qcow2|hdd.qcow2|"
                         "xbox_hdd.img" },
    { "xemu_memory",     "System memory; 64|128" },
    { "xemu_surface_scale", "Internal render scale; 1|2|3|4" },
    { NULL, NULL }
};

static const char *opt(const char *key, const char *def)
{
    struct retro_variable var = { .key = key, .value = NULL };
    if (environ_cb && environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) &&
        var.value && var.value[0]) {
        return var.value;
    }
    return def;
}

static void build_sys_path(char *out, size_t n, const char *file)
{
    snprintf(out, n, "%s%s%s", system_dir,
             (system_dir[0] && system_dir[strlen(system_dir) - 1] != '/' &&
              system_dir[strlen(system_dir) - 1] != '\\') ? "/" : "",
             file);
}

/* ========================================================================= */
/* QEMU boot thread (mirrors upstream qemu_main())                           */
/* ========================================================================= */

static void *qemu_main_thread(void *opaque)
{
    (void)opaque;

    static char *argv[] = { (char *)"xemu", NULL };
    qemu_init(1, argv);

    xemu_lr_signal_display_init();      /* unblock retro_load_game          */

    int status = qemu_main_loop();
    xemu_lr_set_exiting(true);
    (void)status;

    xemu_lr_wait_display_shutdown();
    qemu_cleanup(0);
    return NULL;
}

static bool configure_and_boot(void)
{
    /* Config file lives next to the system files so it persists. */
    char cfg[4200];
    build_sys_path(cfg, sizeof(cfg), "xemu-libretro.toml");
    xemu_settings_set_path(cfg);

    if (!xemu_settings_load()) {
        log_cb(RETRO_LOG_ERROR, "[xemu] settings: %s\n",
               xemu_settings_get_error_message());
        return false;
    }

    char path[4200];
    build_sys_path(path, sizeof(path), opt("xemu_bootrom", "mcpx_1.0.bin"));
    xemu_settings_set_string(&g_config.sys.files.bootrom_path, path);

    build_sys_path(path, sizeof(path), opt("xemu_flashrom", "Complex_4627.bin"));
    xemu_settings_set_string(&g_config.sys.files.flashrom_path, path);

    build_sys_path(path, sizeof(path), opt("xemu_eeprom", "xbox_eeprom.bin"));
    xemu_settings_set_string(&g_config.sys.files.eeprom_path, path);

    build_sys_path(path, sizeof(path), opt("xemu_hdd", "xbox_hdd.qcow2"));
    xemu_settings_set_string(&g_config.sys.files.hdd_path, path);

    /* Upstream deliberately boots a broken machine when firmware files
     * are missing and reports through the HUD, which does not exist
     * here -- the result is QEMU's "Failed to load BIOS '(null)'" and a
     * dead black screen. Validate up front and fail the load with
     * actionable messages instead. (The EEPROM is intentionally not
     * checked: vl.c auto-creates it when absent.) */
    {
        static const char *what[] = {
            "MCPX Boot ROM (512 bytes)",
            "Flash ROM / BIOS",
            "Hard disk image (a blank one is published as "
            "xemu-project/xemu-hdd-image)",
        };
        const char *paths[] = { g_config.sys.files.bootrom_path,
                                g_config.sys.files.flashrom_path,
                                g_config.sys.files.hdd_path };
        bool ok = true;
        for (int i = 0; i < 3; i++) {
            FILE *f = fopen(paths[i], "rb");
            if (!f) {
                log_cb(RETRO_LOG_ERROR,
                       "[xemu] Missing %s: '%s' -- place the file in the "
                       "frontend system directory (filename configurable "
                       "via core options).\n", what[i], paths[i]);
                ok = false;
            } else {
                fclose(f);
            }
        }
        if (!ok) {
            return false;
        }
    }

    /* The first-run welcome flow and missing-file paths in vl.c clear
     * autostart, expecting the HUD to resume the machine -- with the
     * HUD excluded the VM would sit paused forever. */
    g_config.general.show_welcome = false;

    xemu_settings_set_string(&g_config.sys.files.dvd_path, content_path);

    g_config.sys.mem_limit =
        (strcmp(opt("xemu_memory", "64"), "128") == 0) ? CONFIG_SYS_MEM_LIMIT_128
                                                       : CONFIG_SYS_MEM_LIMIT_64;
    g_config.display.quality.surface_scale =
        atoi(opt("xemu_surface_scale", "1"));

    /* Headless GL context for NV2A (hidden native window, WGL). */
    if (!xemu_lr_display_early_init()) {
        log_cb(RETRO_LOG_ERROR, "[xemu] failed to create GL context\n");
        return false;
    }

    qemu_thread_create(&qemu_thread, "qemu_main", qemu_main_thread, NULL,
                       QEMU_THREAD_JOINABLE);
    xemu_lr_wait_display_init();        /* posted once machine is up        */

    /* Bind a synthetic controller to port 1. We write its state directly
     * each retro_run; the xid USB gamepad device reads
     * bound_controllers[0]->buttons / ->axis on each poll. */
    memset(&lr_pad0, 0, sizeof(lr_pad0));
    lr_pad0.type = INPUT_DEVICE_LIBRETRO;
    lr_pad0.name = "RetroPad";

    xemu_lr_lock_main_loop();
    xemu_input_init();
    xemu_input_bind(0, &lr_pad0, 0);
    xemu_lr_unlock_main_loop();

    emu_started = true;
    return true;
}

/* ========================================================================= */
/* Input: RetroPad -> Xbox Duke                                              */
/* ========================================================================= */

static int16_t axis_of(unsigned idx, unsigned id)
{
    return input_state_cb(0, RETRO_DEVICE_ANALOG, idx, id);
}

static void update_input(void)
{
    input_poll_cb();

    uint16_t b = 0;
#define MAP(rp, xb) \
    if (input_state_cb(0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_##rp)) \
        b |= CONTROLLER_BUTTON_##xb
    MAP(B,      A);            /* RetroPad B (south) -> Xbox A  */
    MAP(A,      B);            /* RetroPad A (east)  -> Xbox B  */
    MAP(Y,      X);
    MAP(X,      Y);
    MAP(LEFT,   DPAD_LEFT);
    MAP(RIGHT,  DPAD_RIGHT);
    MAP(UP,     DPAD_UP);
    MAP(DOWN,   DPAD_DOWN);
    MAP(SELECT, BACK);
    MAP(START,  START);
    MAP(L,      WHITE);
    MAP(R,      BLACK);
    MAP(L3,     LSTICK);
    MAP(R3,     RSTICK);
#undef MAP

    int16_t lt = input_state_cb(0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_L2)
                     ? 32767 : axis_of(RETRO_DEVICE_INDEX_ANALOG_BUTTON,
                                       RETRO_DEVICE_ID_JOYPAD_L2);
    int16_t rt = input_state_cb(0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_R2)
                     ? 32767 : axis_of(RETRO_DEVICE_INDEX_ANALOG_BUTTON,
                                       RETRO_DEVICE_ID_JOYPAD_R2);

    xemu_lr_lock_main_loop();
    lr_pad0.buttons = b;
    lr_pad0.axis[CONTROLLER_AXIS_LTRIG]    = lt;
    lr_pad0.axis[CONTROLLER_AXIS_RTRIG]    = rt;
    lr_pad0.axis[CONTROLLER_AXIS_LSTICK_X] =
        axis_of(RETRO_DEVICE_INDEX_ANALOG_LEFT, RETRO_DEVICE_ID_ANALOG_X);
    lr_pad0.axis[CONTROLLER_AXIS_LSTICK_Y] = (int16_t)
        -axis_of(RETRO_DEVICE_INDEX_ANALOG_LEFT, RETRO_DEVICE_ID_ANALOG_Y);
    lr_pad0.axis[CONTROLLER_AXIS_RSTICK_X] =
        axis_of(RETRO_DEVICE_INDEX_ANALOG_RIGHT, RETRO_DEVICE_ID_ANALOG_X);
    lr_pad0.axis[CONTROLLER_AXIS_RSTICK_Y] = (int16_t)
        -axis_of(RETRO_DEVICE_INDEX_ANALOG_RIGHT, RETRO_DEVICE_ID_ANALOG_Y);
    lr_pad0.last_input_updated_ts = qemu_clock_get_ms(QEMU_CLOCK_REALTIME);
    xemu_lr_unlock_main_loop();
}

/* ========================================================================= */
/* Video: read back NV2A framebuffer surface                                 */
/* ========================================================================= */

static void present_frame(void)
{
    if (!xemu_lr_make_gl_current()) {
        video_cb(NULL, fb_w, fb_h, fb_w * sizeof(uint32_t)); /* dupe frame  */
        return;
    }

    GLuint tex = nv2a_get_framebuffer_surface();
    if (tex == 0) {
        /* No color surface bound yet (early boot, mode switches).
         * nv2a_get_framebuffer_surface() sets framebuffer_in_use even
         * when it returns 0, so it MUST be paired with a release or the
         * next call asserts and the render thread stalls forever
         * waiting on framebuffer_released. Show black meanwhile. */
        nv2a_release_framebuffer_surface();
        /* Re-present the last good frame (initially black) rather than
         * flashing: zero surfaces also occur transiently on mode
         * switches mid-game, matching upstream behavior. */
        video_cb(fb_pixels, fb_w, fb_h, fb_w * sizeof(uint32_t));
        return;
    }

    GLint w = 0, h = 0;
    glBindTexture(GL_TEXTURE_2D, tex);
    glGetTexLevelParameteriv(GL_TEXTURE_2D, 0, GL_TEXTURE_WIDTH,  &w);
    glGetTexLevelParameteriv(GL_TEXTURE_2D, 0, GL_TEXTURE_HEIGHT, &h);

    if (w > 0 && h > 0 && w <= XEMU_LR_MAX_W && h <= XEMU_LR_MAX_H) {
        if ((unsigned)w != fb_w || (unsigned)h != fb_h) {
            fb_w = (unsigned)w;
            fb_h = (unsigned)h;
            struct retro_game_geometry geom = {
                .base_width  = fb_w, .base_height = fb_h,
                .max_width   = XEMU_LR_MAX_W, .max_height = XEMU_LR_MAX_H,
                .aspect_ratio = (float)fb_w / (float)fb_h,
            };
            environ_cb(RETRO_ENVIRONMENT_SET_GEOMETRY, &geom);
        }
        glGetTexImage(GL_TEXTURE_2D, 0, GL_BGRA, GL_UNSIGNED_BYTE, fb_pixels);

        /* NV2A surfaces are bottom-up; flip in place. */
        for (unsigned y = 0; y < fb_h / 2; y++) {
            uint32_t *a = fb_pixels + (size_t)y * fb_w;
            uint32_t *c = fb_pixels + (size_t)(fb_h - 1 - y) * fb_w;
            for (unsigned x = 0; x < fb_w; x++) {
                uint32_t t = a[x]; a[x] = c[x]; c[x] = t;
            }
        }
    }
    glBindTexture(GL_TEXTURE_2D, 0);
    nv2a_release_framebuffer_surface();

    video_cb(fb_pixels, fb_w, fb_h, fb_w * sizeof(uint32_t));
}

/* ========================================================================= */
/* Libretro API                                                              */
/* ========================================================================= */

RETRO_API void retro_set_environment(retro_environment_t cb)
{
    environ_cb = cb;

    struct retro_log_callback logging;
    log_cb = cb(RETRO_ENVIRONMENT_GET_LOG_INTERFACE, &logging)
                 ? logging.log : fallback_log;

    cb(RETRO_ENVIRONMENT_SET_VARIABLES, (void *)core_vars);

    bool no_game = false;
    cb(RETRO_ENVIRONMENT_SET_SUPPORT_NO_GAME, &no_game);
}

RETRO_API void retro_set_video_refresh(retro_video_refresh_t cb) { video_cb = cb; }
RETRO_API void retro_set_audio_sample(retro_audio_sample_t cb) { (void)cb; }
RETRO_API void retro_set_audio_sample_batch(retro_audio_sample_batch_t cb) { audio_batch_cb = cb; }
RETRO_API void retro_set_input_poll(retro_input_poll_t cb) { input_poll_cb = cb; }
RETRO_API void retro_set_input_state(retro_input_state_t cb) { input_state_cb = cb; }

RETRO_API void retro_init(void)
{
    fb_pixels = calloc((size_t)XEMU_LR_MAX_W * XEMU_LR_MAX_H, sizeof(uint32_t));

    const char *dir = NULL;
    if (environ_cb(RETRO_ENVIRONMENT_GET_SYSTEM_DIRECTORY, &dir) && dir) {
        snprintf(system_dir, sizeof(system_dir), "%s", dir);
    }
}

RETRO_API void retro_deinit(void)
{
    free(fb_pixels);
    fb_pixels = NULL;
}

RETRO_API unsigned retro_api_version(void) { return RETRO_API_VERSION; }

RETRO_API void retro_get_system_info(struct retro_system_info *info)
{
    memset(info, 0, sizeof(*info));
    info->library_name     = "xemu";
    info->library_version  = "libretro-experimental";
    info->valid_extensions = "iso|xiso";
    info->need_fullpath    = true;   /* QEMU opens the disc itself */
    info->block_extract    = true;
}

RETRO_API void retro_get_system_av_info(struct retro_system_av_info *info)
{
    memset(info, 0, sizeof(*info));
    info->geometry.base_width   = fb_w;
    info->geometry.base_height  = fb_h;
    info->geometry.max_width    = XEMU_LR_MAX_W;
    info->geometry.max_height   = XEMU_LR_MAX_H;
    info->geometry.aspect_ratio = 4.0f / 3.0f;
    info->timing.fps            = 60.0;
    info->timing.sample_rate    = 48000.0;
}

RETRO_API void retro_set_controller_port_device(unsigned port, unsigned device)
{
    (void)port; (void)device;
}

RETRO_API bool retro_load_game(const struct retro_game_info *game)
{
    enum retro_pixel_format fmt = RETRO_PIXEL_FORMAT_XRGB8888;
    if (!environ_cb(RETRO_ENVIRONMENT_SET_PIXEL_FORMAT, &fmt)) {
        log_cb(RETRO_LOG_ERROR, "[xemu] XRGB8888 not supported by frontend\n");
        return false;
    }

    static const struct retro_input_descriptor desc[] = {
        { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_B,      "A" },
        { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_A,      "B" },
        { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_Y,      "X" },
        { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_X,      "Y" },
        { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_L,      "White" },
        { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_R,      "Black" },
        { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_L2,     "Left Trigger" },
        { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_R2,     "Right Trigger" },
        { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_SELECT, "Back" },
        { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_START,  "Start" },
        { 0, 0, 0, 0, NULL },
    };
    environ_cb(RETRO_ENVIRONMENT_SET_INPUT_DESCRIPTORS, (void *)desc);

    if (!game || !game->path) {
        log_cb(RETRO_LOG_ERROR, "[xemu] no content path\n");
        return false;
    }
    snprintf(content_path, sizeof(content_path), "%s", game->path);

    if (!configure_and_boot()) {
        emu_failed = true;
        return false;
    }
    return true;
}

RETRO_API bool retro_load_game_special(unsigned type,
                                       const struct retro_game_info *info,
                                       size_t num)
{
    (void)type; (void)info; (void)num;
    return false;
}

RETRO_API void retro_run(void)
{
    if (!emu_started || emu_failed || xemu_lr_is_exiting()) {
        environ_cb(RETRO_ENVIRONMENT_SHUTDOWN, NULL);
        return;
    }

    update_input();
    xemu_lr_vblank();      /* graphic_hw_update under BQL -> new NV2A frame */
    present_frame();

    /* Drain the MCPX APU's ring into the frontend. Cap the burst so a
     * backlog can't blow past what frontends accept per call. */
    static int16_t abuf[48000 / 60 * 2 * 4];
    size_t frames = xemu_lr_audio_drain(abuf, 48000 / 60 * 4);
    if (frames > 0) {
        audio_batch_cb(abuf, frames);
    } else {
        static const int16_t silence[2] = { 0, 0 };
        audio_batch_cb(silence, 1);
    }
}

RETRO_API void retro_unload_game(void)
{
    if (!emu_started) {
        return;
    }
    xemu_lr_lock_main_loop();
    qemu_system_shutdown_request(SHUTDOWN_CAUSE_HOST_UI);
    xemu_lr_unlock_main_loop();

    /* Upstream's main thread keeps pumping vblanks in a
     * while (!qemu_exiting) loop through the whole shutdown: the NV2A
     * render thread stalls on flip (pgraph_gl_flip_stall) until the
     * presenter services the frame, and a stalled flip wedges the vCPU
     * mid-MMIO so qemu_main_loop() can never quiesce. Stop pumping too
     * early and qemu_thread_join() below hangs the frontend forever --
     * exactly what happened on the first in-frontend content close.
     * Pump vblank plus the framebuffer get/release handshake until the
     * QEMU thread flags its exit. */
    while (!xemu_lr_is_exiting()) {
        xemu_lr_vblank();
        if (xemu_lr_make_gl_current()) {
            (void)nv2a_get_framebuffer_surface();
            nv2a_release_framebuffer_surface();
        }
        g_usleep(4000);
    }

    xemu_lr_signal_display_shutdown();
    qemu_thread_join(&qemu_thread);
    xemu_lr_display_finalize();
    emu_started = false;
}

RETRO_API void retro_reset(void)
{
    if (!emu_started) {
        return;
    }
    xemu_lr_lock_main_loop();
    qemu_system_reset_request(SHUTDOWN_CAUSE_HOST_UI);
    xemu_lr_unlock_main_loop();
}

RETRO_API unsigned retro_get_region(void) { return RETRO_REGION_NTSC; }

/* Save states: QEMU snapshots need block-backend integration; stubbed for
 * the first target. xemu's own snapshot system (ui/xemu-snapshots.c) is the
 * intended backend for a follow-up. */
RETRO_API size_t retro_serialize_size(void) { return 0; }
RETRO_API bool retro_serialize(void *data, size_t size) { (void)data; (void)size; return false; }
RETRO_API bool retro_unserialize(const void *data, size_t size) { (void)data; (void)size; return false; }

RETRO_API void retro_cheat_reset(void) {}
RETRO_API void retro_cheat_set(unsigned index, bool enabled, const char *code)
{
    (void)index; (void)enabled; (void)code;
}

RETRO_API void *retro_get_memory_data(unsigned id) { (void)id; return NULL; }
RETRO_API size_t retro_get_memory_size(unsigned id) { (void)id; return 0; }
