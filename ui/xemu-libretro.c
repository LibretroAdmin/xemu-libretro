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
 *     the frontend's GL context; the NV2A surface is blitted into the
 *     frontend's FBO (RETRO_HW_FRAME_BUFFER_VALID), zero readback
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

#include "qapi/error.h"
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

extern void nv2a_lr_pfifo_pump(void);

static struct retro_hw_render_callback hw_render; /* frontend-owned GL     */
static bool     gl_ready;               /* context_reset has fired          */
static bool     boot_pending;           /* configured, machine not started  */
static bool     machine_resident;       /* QEMU booted once; stays resident */
static bool     resume_pending;         /* resident machine awaits new disc */
static bool     booting;                /* QEMU thread up, machine booting  */
static GLuint   blit_fbo;               /* surface -> frontend FBO blit     */
static unsigned  fb_w = XEMU_LR_DEF_W;
static unsigned  fb_h = XEMU_LR_DEF_H;

static bool      emu_started;
static bool      emu_failed;
static QemuThread qemu_thread;
static char      content_path[4096];
static char      system_dir[4096];

/* Virtual controller injected into xemu's input layer (port 1 / Duke). */
static ControllerState lr_pads[4];
#define lr_pad0 lr_pads[0]
static unsigned port_device[4] = {
    RETRO_DEVICE_JOYPAD, RETRO_DEVICE_NONE,
    RETRO_DEVICE_NONE,   RETRO_DEVICE_NONE,
};
static bool ports_dirty;

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
    (void)status;

    /* qemu_main_loop returns holding the BQL. The unload wait loop on
     * the libretro thread takes the BQL every iteration (vblank), and
     * it only signals display_shutdown after it observes the exiting
     * flag -- holding the BQL across this wait deadlocks both threads,
     * racily: whichever thread wins the first check decides whether
     * shutdown completes or wedges. Drop it for the handshake. */
    bql_unlock();
    xemu_lr_set_exiting(true);
    xemu_lr_wait_display_shutdown();
    bql_lock();

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

    /* GL comes from the frontend (SET_HW_RENDER); nothing to create. */
    if (!xemu_lr_display_early_init()) {
        log_cb(RETRO_LOG_ERROR, "[xemu] display early init failed\n");
        return false;
    }

    /* Do NOT start the machine here. Machine reset (nv2a_reset) blocks
     * on fifo idle and a pgraph flush, both serviced only by the pfifo
     * pump -- which needs the frontend GL context, delivered via
     * context_reset only after retro_load_game returns. The boot thread
     * starts on the first retro_run with GL ready; the pump services
     * the reset handshakes while boot progresses. */
    boot_pending = true;
    return true;
}

extern void nv2a_lr_invalidate_renderer(void);

static void finish_boot(void);

static void do_resume(void)
{
    resume_pending = false; /* one shot, even if a step below fails */

    /* The previous session may have been closed while the machine was
     * still in qemu_init (unload's bounded wait abandoned it). The
     * machine is resident either way -- finish the boot before
     * operating on it. */
    if (booting) {
        log_cb(RETRO_LOG_INFO, "[xemu] resume: waiting for in-flight boot\n");
        while (!xemu_lr_try_wait_display_init()) {
            if (gl_ready) {
                nv2a_lr_pfifo_pump();
            }
            g_usleep(4000);
        }
        finish_boot();
    }

    log_cb(RETRO_LOG_INFO, "[xemu] resume: invalidating renderer\n");
    nv2a_lr_invalidate_renderer();

    log_cb(RETRO_LOG_INFO, "[xemu] resume: swapping disc\n");
    bql_lock();
    Error *err = NULL;
    xemu_lr_load_disc(content_path, (struct Error **)&err);
    if (err) {
        log_cb(RETRO_LOG_ERROR, "[xemu] resume: disc swap failed: %s\n",
               error_get_pretty(err));
        error_free(err);
    }
    log_cb(RETRO_LOG_INFO, "[xemu] resume: reset + vm_start\n");
    qemu_system_reset_request(SHUTDOWN_CAUSE_GUEST_RESET);
    if (!runstate_is_running()) {
        vm_start();
    }
    bql_unlock();

    xemu_lr_audio_reset();
    emu_started = true;
    log_cb(RETRO_LOG_INFO, "[xemu] resume: machine running\n");
}

static void start_boot(void)
{
    machine_resident = true;
    qemu_thread_create(&qemu_thread, "qemu_main", qemu_main_thread, NULL,
                       QEMU_THREAD_JOINABLE);
    boot_pending = false;
    booting = true;
}

static void finish_boot(void)
{
    /* qemu_init is done; the machine and main loop are up. Bind a
     * synthetic controller on every port the frontend has a device
     * plugged into (retro_set_controller_port_device); port 1 defaults
     * to a RetroPad. We write pad state directly each retro_run; each
     * xid USB gamepad reads bound_controllers[i]->buttons / ->axis. */
    xemu_lr_lock_main_loop();
    xemu_input_init();
    for (int i = 0; i < 4; i++) {
        if (port_device[i] != RETRO_DEVICE_NONE) {
            memset(&lr_pads[i], 0, sizeof(lr_pads[i]));
            lr_pads[i].type = INPUT_DEVICE_LIBRETRO;
            lr_pads[i].name = "RetroPad";
            xemu_input_bind(i, &lr_pads[i], 0);
        }
    }
    ports_dirty = false;
    xemu_lr_unlock_main_loop();

    booting = false;
    emu_started = true;
}

/* ========================================================================= */
/* Input: RetroPad -> Xbox Duke                                              */
/* ========================================================================= */

static int16_t pad_axis(int port, unsigned idx, unsigned id)
{
    return input_state_cb(port, RETRO_DEVICE_ANALOG, idx, id);
}

static void apply_port_changes(void)
{
    /* retro_set_controller_port_device arrived mid-session: bind or
     * unbind on the live machine. */
    bql_lock();
    for (int i = 0; i < 4; i++) {
        extern ControllerState *xemu_input_get_bound(int index);
        bool want = port_device[i] != RETRO_DEVICE_NONE;
        bool have = xemu_input_get_bound(i) != NULL;
        if (want && !have) {
            memset(&lr_pads[i], 0, sizeof(lr_pads[i]));
            lr_pads[i].type = INPUT_DEVICE_LIBRETRO;
            lr_pads[i].name = "RetroPad";
            xemu_input_bind(i, &lr_pads[i], 0);
        } else if (!want && have) {
            xemu_input_bind(i, NULL, 0);
        }
    }
    ports_dirty = false;
    bql_unlock();
}

static void update_pad(int port)
{
    uint16_t b = 0;
#define MAP(rp, xb) \
    if (input_state_cb(port, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_##rp)) \
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

    int16_t lt = input_state_cb(port, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_L2)
                     ? 32767 : pad_axis(port, RETRO_DEVICE_INDEX_ANALOG_BUTTON,
                                        RETRO_DEVICE_ID_JOYPAD_L2);
    int16_t rt = input_state_cb(port, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_R2)
                     ? 32767 : pad_axis(port, RETRO_DEVICE_INDEX_ANALOG_BUTTON,
                                        RETRO_DEVICE_ID_JOYPAD_R2);

    ControllerState *p = &lr_pads[port];
    p->buttons = b;
    p->axis[CONTROLLER_AXIS_LTRIG]    = lt;
    p->axis[CONTROLLER_AXIS_RTRIG]    = rt;
    p->axis[CONTROLLER_AXIS_LSTICK_X] =
        pad_axis(port, RETRO_DEVICE_INDEX_ANALOG_LEFT, RETRO_DEVICE_ID_ANALOG_X);
    p->axis[CONTROLLER_AXIS_LSTICK_Y] = (int16_t)
        -pad_axis(port, RETRO_DEVICE_INDEX_ANALOG_LEFT, RETRO_DEVICE_ID_ANALOG_Y);
    p->axis[CONTROLLER_AXIS_RSTICK_X] =
        pad_axis(port, RETRO_DEVICE_INDEX_ANALOG_RIGHT, RETRO_DEVICE_ID_ANALOG_X);
    p->axis[CONTROLLER_AXIS_RSTICK_Y] = (int16_t)
        -pad_axis(port, RETRO_DEVICE_INDEX_ANALOG_RIGHT, RETRO_DEVICE_ID_ANALOG_Y);
    p->last_input_updated_ts = qemu_clock_get_ms(QEMU_CLOCK_REALTIME);
}

static void update_input(void)
{
    input_poll_cb();
    if (ports_dirty && emu_started) {
        apply_port_changes();
    }
    xemu_lr_lock_main_loop();
    for (int i = 0; i < 4; i++) {
        if (port_device[i] != RETRO_DEVICE_NONE) {
            update_pad(i);
        }
    }
    xemu_lr_unlock_main_loop();
}

/* ========================================================================= */
/* Video: frontend-owned GL context (RETRO_ENVIRONMENT_SET_HW_RENDER).       */
/* The NV2A surface texture is blitted straight into the frontend's FBO;     */
/* no readback, no core-side context, no window.                             */
/* ========================================================================= */

static void context_reset(void)
{
    /* The frontend's context is current on this thread right now:
     * the first (and only) safe moment to run NV2A's GL-probing
     * context init. */
    if (!xemu_lr_gl_context_ready()) {
        log_cb(RETRO_LOG_ERROR,
               "[xemu] frontend GL context unusable (need 4.0 core)\n");
        emu_failed = true;
        return;
    }
    gl_ready = true;
    blit_fbo = 0; /* recreate lazily in the new context */
    log_cb(RETRO_LOG_INFO, "[xemu] GL context ready: %s\n",
           (const char *)glGetString(GL_RENDERER));
}

static void context_destroy(void)
{
    /* All pgraph GL objects live in this context; xemu cannot recreate
     * them mid-session. cache_context asks the frontend to avoid this
     * outside teardown. */
    gl_ready = false;
    blit_fbo = 0;
}

static void present_frame(void)
{
    if (!gl_ready) {
        video_cb(NULL, fb_w, fb_h, 0); /* dupe */
        return;
    }

    GLuint tex = nv2a_get_framebuffer_surface();
    if (tex == 0) {
        /* No color surface bound yet (early boot, mode switches).
         * nv2a_get_framebuffer_surface() sets framebuffer_in_use even
         * when it returns 0, so it MUST be paired with a release or the
         * pump stalls forever waiting on framebuffer_released. */
        nv2a_release_framebuffer_surface();
        video_cb(NULL, fb_w, fb_h, 0); /* dupe last frame */
        return;
    }

    GLint w = 0, h = 0;
    glBindTexture(GL_TEXTURE_2D, tex);
    glGetTexLevelParameteriv(GL_TEXTURE_2D, 0, GL_TEXTURE_WIDTH,  &w);
    glGetTexLevelParameteriv(GL_TEXTURE_2D, 0, GL_TEXTURE_HEIGHT, &h);
    glBindTexture(GL_TEXTURE_2D, 0);

    if (w > 0 && h > 0 && w <= XEMU_LR_MAX_W && h <= XEMU_LR_MAX_H &&
        ((unsigned)w != fb_w || (unsigned)h != fb_h)) {
        fb_w = (unsigned)w;
        fb_h = (unsigned)h;
        struct retro_game_geometry geom = {
            .base_width  = fb_w, .base_height = fb_h,
            .max_width   = XEMU_LR_MAX_W, .max_height = XEMU_LR_MAX_H,
            .aspect_ratio = (float)fb_w / (float)fb_h,
        };
        environ_cb(RETRO_ENVIRONMENT_SET_GEOMETRY, &geom);
    }

    if (!blit_fbo) {
        glGenFramebuffers(1, &blit_fbo);
    }

    /* NV2A surfaces are bottom-up, which is exactly GL's bottom-left
     * origin: with hw_render.bottom_left_origin set there is no flip. */
    glDisable(GL_SCISSOR_TEST);
    glBindFramebuffer(GL_READ_FRAMEBUFFER, blit_fbo);
    glFramebufferTexture2D(GL_READ_FRAMEBUFFER, GL_COLOR_ATTACHMENT0,
                           GL_TEXTURE_2D, tex, 0);
    GLuint dst = (GLuint)hw_render.get_current_framebuffer();
    glBindFramebuffer(GL_DRAW_FRAMEBUFFER, dst);

    static unsigned diag_frames;
    if (diag_frames < 5 || (diag_frames % 60 == 0 && diag_frames < 1800)) {
        GLenum rs = glCheckFramebufferStatus(GL_READ_FRAMEBUFFER);
        GLenum ds = glCheckFramebufferStatus(GL_DRAW_FRAMEBUFFER);
        /* Sample the display buffer: distinguishes "black content" from
         * "presentation problem" once and for all. */
        uint32_t px[4] = { 0, 0, 0, 0 };
        glReadPixels(fb_w / 2, fb_h / 2, 2, 2, GL_RGBA, GL_UNSIGNED_BYTE, px);
        log_cb(RETRO_LOG_INFO,
               "[xemu] present: tex=%u %ux%u dst_fbo=%u read=0x%x draw=0x%x "
               "center=%08x %08x\n",
               tex, fb_w, fb_h, dst, rs, ds, px[0], px[1]);
    }

    glBlitFramebuffer(0, 0, fb_w, fb_h, 0, 0, fb_w, fb_h,
                      GL_COLOR_BUFFER_BIT, GL_NEAREST);

    for (GLenum e; (e = glGetError()) != GL_NO_ERROR; ) {
        if (diag_frames < 60) {
            log_cb(RETRO_LOG_ERROR, "[xemu] present: GL error 0x%x\n", e);
        }
    }
    if (diag_frames < 1000000) {
        diag_frames++;
    }
    glBindFramebuffer(GL_READ_FRAMEBUFFER, 0);

    nv2a_release_framebuffer_surface();

    video_cb(RETRO_HW_FRAME_BUFFER_VALID, fb_w, fb_h, 0);
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
    xemu_lr_pin_module();

    const char *dir = NULL;
    if (environ_cb(RETRO_ENVIRONMENT_GET_SYSTEM_DIRECTORY, &dir) && dir) {
        snprintf(system_dir, sizeof(system_dir), "%s", dir);
    }
}

RETRO_API void retro_deinit(void)
{
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
    if (port >= 4) {
        return;
    }
    unsigned d = (device == RETRO_DEVICE_JOYPAD || device == RETRO_DEVICE_ANALOG)
                     ? RETRO_DEVICE_JOYPAD : RETRO_DEVICE_NONE;
    if (port_device[port] != d) {
        port_device[port] = d;
        ports_dirty = true;
        log_cb(RETRO_LOG_INFO, "[xemu] port %u -> %s\n", port + 1,
               d == RETRO_DEVICE_JOYPAD ? "Duke gamepad" : "disconnected");
    }
}

RETRO_API bool retro_load_game(const struct retro_game_info *game)
{
    #define XPAD_DESCS(P) \
        { P, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_B,      "A" }, \
        { P, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_A,      "B" }, \
        { P, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_Y,      "X" }, \
        { P, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_X,      "Y" }, \
        { P, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_UP,     "D-Pad Up" }, \
        { P, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_DOWN,   "D-Pad Down" }, \
        { P, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_LEFT,   "D-Pad Left" }, \
        { P, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_RIGHT,  "D-Pad Right" }, \
        { P, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_START,  "Start" }, \
        { P, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_SELECT, "Back" }, \
        { P, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_L,      "White" }, \
        { P, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_R,      "Black" }, \
        { P, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_L2,     "Left Trigger" }, \
        { P, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_R2,     "Right Trigger" }, \
        { P, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_L3,     "Left Stick Click" }, \
        { P, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_R3,     "Right Stick Click" }, \
        { P, RETRO_DEVICE_ANALOG, RETRO_DEVICE_INDEX_ANALOG_LEFT, \
          RETRO_DEVICE_ID_ANALOG_X, "Left Stick X" }, \
        { P, RETRO_DEVICE_ANALOG, RETRO_DEVICE_INDEX_ANALOG_LEFT, \
          RETRO_DEVICE_ID_ANALOG_Y, "Left Stick Y" }, \
        { P, RETRO_DEVICE_ANALOG, RETRO_DEVICE_INDEX_ANALOG_RIGHT, \
          RETRO_DEVICE_ID_ANALOG_X, "Right Stick X" }, \
        { P, RETRO_DEVICE_ANALOG, RETRO_DEVICE_INDEX_ANALOG_RIGHT, \
          RETRO_DEVICE_ID_ANALOG_Y, "Right Stick Y" }

    static const struct retro_input_descriptor descs[] = {
        XPAD_DESCS(0), XPAD_DESCS(1), XPAD_DESCS(2), XPAD_DESCS(3),
        { 0, 0, 0, 0, NULL },
    };
    environ_cb(RETRO_ENVIRONMENT_SET_INPUT_DESCRIPTORS, (void *)descs);

    /* xemu renders with desktop GL 4.0 core; the frontend owns the
     * context and tells us via context_reset when it exists. */
    memset(&hw_render, 0, sizeof(hw_render));
    hw_render.context_type       = RETRO_HW_CONTEXT_OPENGL_CORE;
    hw_render.version_major      = 4;
    hw_render.version_minor      = 0;
    hw_render.context_reset      = context_reset;
    hw_render.context_destroy    = context_destroy;
    hw_render.bottom_left_origin = true;
    hw_render.depth              = false;
    hw_render.stencil            = false;
    hw_render.cache_context      = true;
    if (!environ_cb(RETRO_ENVIRONMENT_SET_HW_RENDER, &hw_render)) {
        log_cb(RETRO_LOG_ERROR,
               "[xemu] frontend refused an OpenGL 4.0 core context; "
               "enable the glcore video driver\n");
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

    static const struct retro_controller_description duke_desc[] = {
        { "Xbox Duke Gamepad", RETRO_DEVICE_JOYPAD },
    };
    static const struct retro_controller_info ports_info[] = {
        { duke_desc, 1 }, { duke_desc, 1 }, { duke_desc, 1 }, { duke_desc, 1 },
        { NULL, 0 },
    };
    environ_cb(RETRO_ENVIRONMENT_SET_CONTROLLER_INFO, (void *)ports_info);

    if (!game || !game->path) {
        log_cb(RETRO_LOG_ERROR, "[xemu] no content path\n");
        return false;
    }
    snprintf(content_path, sizeof(content_path), "%s", game->path);

    if (machine_resident) {
        /* Resident machine from the previous session: skip configure
         * entirely (the settings singleton and machine options are
         * once-per-process; only the disc changes). Resume happens on
         * the first retro_run with GL ready. */
        resume_pending = true;
        return true;
    }

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
    if (emu_failed || (emu_started && xemu_lr_is_exiting())) {
        environ_cb(RETRO_ENVIRONMENT_SHUTDOWN, NULL);
        return;
    }

    if (!gl_ready) {
        /* Frontend has not delivered the GL context yet. */
        video_cb(NULL, fb_w, fb_h, 0);
        static const int16_t s16sil[2] = { 0, 0 };
        audio_batch_cb(s16sil, 1);
        return;
    }

    if (resume_pending) {
        do_resume();
    }
    if (boot_pending) {
        start_boot();
    }
    if (booting) {
        /* Service the machine's reset/flush handshakes while qemu_init
         * runs; the first pump also performs renderer init with the
         * frontend context current. */
        nv2a_lr_pfifo_pump();
        if (xemu_lr_try_wait_display_init()) {
            finish_boot();
        } else {
            video_cb(NULL, fb_w, fb_h, 0);
            static const int16_t bsil[2] = { 0, 0 };
            audio_batch_cb(bsil, 1);
            return;
        }
    }
    if (!emu_started) {
        video_cb(NULL, fb_w, fb_h, 0);
        return;
    }

    update_input();
    nv2a_lr_pfifo_pump();  /* drain work submitted since last frame        */
    xemu_lr_vblank();      /* graphic_hw_update under BQL -> new NV2A frame */
    nv2a_lr_pfifo_pump();  /* drain work the vblank kicked off             */
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
    if (boot_pending) {
        boot_pending = false;
        return;
    }
    if (booting) {
        int spins = 2500;
        while (!xemu_lr_try_wait_display_init() && --spins > 0) {
            if (gl_ready) {
                nv2a_lr_pfifo_pump();
            }
            g_usleep(4000);
        }
        if (spins <= 0) {
            log_cb(RETRO_LOG_ERROR,
                   "[xemu] boot did not complete during unload; "
                   "abandoning the machine thread\n");
            return;
        }
        finish_boot();
    }
    if (!emu_started) {
        return;
    }

    /* The machine stays resident: pause it and hand everything else to
     * the next retro_load_game, which swaps the disc and reboots. No
     * qemu shutdown, no thread joins, no once-per-process anything --
     * closing and reopening content must always just work. */
    log_cb(RETRO_LOG_INFO, "[xemu] unload: pausing resident machine\n");
    /* BQL only: vm_stop's bdrv drain needs the main-loop thread to
     * keep servicing its context, so the main-loop mutex must stay
     * free. */
    bql_lock();
    vm_stop(RUN_STATE_PAUSED);
    bql_unlock();
    xemu_lr_audio_reset();
    emu_started = false;
    log_cb(RETRO_LOG_INFO, "[xemu] unload: machine paused, resident\n");
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
