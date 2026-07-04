/*
 * xemu libretro glue
 * ------------------
 * Replaces ui/xemu.c in the libretro build. Provides:
 *
 *   1. The symbols the rest of the xemu tree expects ui/xemu.c to define
 *      (xemu_main_loop_lock/unlock, the DISPLAY_TYPE_XEMU QemuDisplay
 *      registration, init/shutdown semaphores).
 *   2. Display-listener plumbing for the NV2A renderer. The frontend owns
 *      the GL context (RETRO_ENVIRONMENT_SET_HW_RENDER); all pgraph GL
 *      work runs on the libretro thread via the pfifo pump, so no window
 *      or context is created here at all.
 *   3. The libretro audio sink the MCPX APU pushes into (48kHz S16LE
 *      stereo ring buffer, drained by retro_run into audio_batch_cb).
 *   4. Stubs for the excluded ImGui HUD layer.
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

#include "qemu/osdep.h"
#include "qemu/thread.h"
#include "qemu/atomic.h"
#include "qemu/main-loop.h"
#include "qemu/module.h"
#include "qapi/error.h"
#include "ui/console.h"
#include "system/system.h"

#include <windows.h>
#include <epoxy/gl.h>

#include "ui/xemu-settings.h"
#include "hw/xbox/nv2a/nv2a.h"
#include "hw/xbox/smbus.h"
#include "qapi/qapi-commands-block.h"
#include "system/runstate.h"
#include "system/cpus.h"
#include "xemu-libretro-glue.h"

static QemuSemaphore display_init_sem;
static QemuSemaphore display_shutdown_sem;
static bool          qemu_exiting;
static bool          sems_ready;

static struct {
    DisplayChangeListener dcl;
    DisplaySurface *surface;
} lr_con;

/* ===================================================================== */
/* Symbols upstream ui/xemu.c exports for the rest of the tree            */
/* ===================================================================== */

void xemu_main_loop_lock(void)
{
    qemu_mutex_lock_main_loop();
    bql_lock();
}

void xemu_main_loop_unlock(void)
{
    bql_unlock();
    qemu_mutex_unlock_main_loop();
}

HMODULE xemu_lr_module_handle(void);
HMODULE xemu_lr_module_handle(void)
{
    HMODULE h = NULL;
    GetModuleHandleExA(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS |
                       GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
                       (LPCSTR)&xemu_lr_module_handle, &h);
    return h;
}

/* QEMU spawns threads it never joins -- call_rcu, worker pools, parked
 * TCG vCPUs -- because a QEMU process dies as a whole. As a libretro
 * core we get FreeLibrary'd instead, and any of those threads then
 * executes unmapped code: a loader-lock deadlock or an execute-access
 * fault at the exact moment the frontend unloads the core, right after
 * a perfectly clean retro_unload_game. Pin the module so FreeLibrary
 * is a no-op and resident threads stay harmless. */
void xemu_lr_pin_module(void);
void xemu_lr_pin_module(void)
{
    HMODULE h = NULL;
    GetModuleHandleExA(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS |
                       GET_MODULE_HANDLE_EX_FLAG_PIN,
                       (LPCSTR)&xemu_lr_pin_module, &h);
}

/* HUD-only upstream; opaque and unused here. */
void *xemu_get_window(void);
void *xemu_get_window(void)
{
    return NULL;
}

/* ===================================================================== */
/* xemu_lr_* API                                                          */
/* ===================================================================== */

void xemu_lr_lock_main_loop(void)   { xemu_main_loop_lock(); }
void xemu_lr_unlock_main_loop(void) { xemu_main_loop_unlock(); }

void xemu_lr_set_exiting(bool v)    { qatomic_set(&qemu_exiting, v); }
bool xemu_lr_is_exiting(void)       { return qatomic_read(&qemu_exiting); }

static void ensure_sems(void)
{
    if (!sems_ready) {
        qemu_sem_init(&display_init_sem, 0);
        qemu_sem_init(&display_shutdown_sem, 0);
        sems_ready = true;
    }
}

void xemu_lr_signal_display_init(void)     { ensure_sems(); qemu_sem_post(&display_init_sem); }
void xemu_lr_wait_display_init(void)       { ensure_sems(); qemu_sem_wait(&display_init_sem); }
bool xemu_lr_try_wait_display_init(void)
{
    ensure_sems();
    return qemu_sem_timedwait(&display_init_sem, 0) == 0;
}
void xemu_lr_signal_display_shutdown(void) { ensure_sems(); qemu_sem_post(&display_shutdown_sem); }
void xemu_lr_wait_display_shutdown(void)   { ensure_sems(); qemu_sem_wait(&display_shutdown_sem); }

/* --------------------------------------------------------------------- */
/* Display init: the frontend owns the GL context (SET_HW_RENDER). By    */
/* the time the shim calls this, context_reset has fired and the         */
/* frontend context is current on this thread. NV2A's gloffscreen        */
/* "contexts" are no-op stand-ins for it.                                */
/* --------------------------------------------------------------------- */

bool xemu_lr_display_early_init(void)
{
    /* Called during retro_load_game, BEFORE the frontend delivers the
     * GL context (context_reset fires after load returns). Touch no GL
     * whatsoever here: nv2a_context_init() probes the GPU with real GL
     * calls (pgraph_gl_determine_gpu_properties), so even it must wait
     * for context_reset. */
    ensure_sems();
    return true;
}

/* Called from the shim's context_reset with the frontend's GL context
 * current on this thread. Safe to probe GL and set up NV2A's context
 * bookkeeping (no-op gloffscreen stand-ins). Idempotent per session. */
bool xemu_lr_gl_context_ready(void)
{
    static bool done;

    if (epoxy_gl_version() < 40) {
        fprintf(stderr, "[xemu-lr] need OpenGL 4.0 core (got %d)\n",
                epoxy_gl_version());
        return false;
    }
    fprintf(stderr, "[xemu-lr] GL_RENDERER: %s\n", glGetString(GL_RENDERER));
    fprintf(stderr, "[xemu-lr] GL_VERSION:  %s\n", glGetString(GL_VERSION));

    if (!done) {
        nv2a_context_init();
        done = true;
    }
    return true;
}

void xemu_lr_vblank(void)
{
    if (!lr_con.dcl.con) {
        return;
    }
    xemu_main_loop_lock();
    graphic_hw_update(lr_con.dcl.con);
    xemu_main_loop_unlock();
}

void xemu_lr_display_finalize(void)
{
    lr_con.dcl.con = NULL;
}

/* ===================================================================== */
/* Libretro audio sink: the MCPX APU pushes 48kHz S16LE stereo here;      */
/* retro_run drains it into the frontend's audio_batch_cb.                */
/* ===================================================================== */

#define LR_AUDIO_RING_BYTES (256 * 1024) /* ~0.68s at 48kHz stereo s16 */

static struct {
    uint8_t    buf[LR_AUDIO_RING_BYTES];
    size_t     rd, wr;      /* byte offsets, wrap via modulo   */
    size_t     level;       /* bytes queued                    */
    QemuMutex  lock;
    bool       inited;
} lr_audio;

void xemu_lr_audio_init(void)
{
    if (!lr_audio.inited) {
        qemu_mutex_init(&lr_audio.lock);
        lr_audio.inited = true;
    }
}

size_t xemu_lr_audio_queued(void)
{
    if (!lr_audio.inited) {
        return 0;
    }
    qemu_mutex_lock(&lr_audio.lock);
    size_t n = lr_audio.level;
    qemu_mutex_unlock(&lr_audio.lock);
    return n;
}

void xemu_lr_audio_push(const void *data, size_t bytes, float gain)
{
    if (!lr_audio.inited) {
        return;
    }
    const int16_t *in = data;
    size_t samples = bytes / sizeof(int16_t);

    qemu_mutex_lock(&lr_audio.lock);
    for (size_t i = 0; i < samples; i++) {
        if (lr_audio.level + sizeof(int16_t) > LR_AUDIO_RING_BYTES) {
            break; /* full: drop the excess, frontend is behind */
        }
        int32_t s = (int32_t)((float)in[i] * gain);
        int16_t v = s > 32767 ? 32767 : (s < -32768 ? -32768 : (int16_t)s);
        memcpy(&lr_audio.buf[lr_audio.wr], &v, sizeof(v));
        lr_audio.wr = (lr_audio.wr + sizeof(v)) % LR_AUDIO_RING_BYTES;
        lr_audio.level += sizeof(v);
    }
    qemu_mutex_unlock(&lr_audio.lock);
}

size_t xemu_lr_audio_drain(int16_t *out, size_t max_frames)
{
    if (!lr_audio.inited) {
        return 0;
    }
    qemu_mutex_lock(&lr_audio.lock);
    size_t frames = MIN(max_frames, lr_audio.level / 4); /* 2ch s16 */
    for (size_t i = 0; i < frames * 2; i++) {
        memcpy(&out[i], &lr_audio.buf[lr_audio.rd], sizeof(int16_t));
        lr_audio.rd = (lr_audio.rd + sizeof(int16_t)) % LR_AUDIO_RING_BYTES;
    }
    lr_audio.level -= frames * 4;
    qemu_mutex_unlock(&lr_audio.lock);
    return frames;
}

/* --------------------------------------------------------------------- */
/* Resident-session helpers: disc swap (ported from ui/xemu.c) and audio  */
/* ring reset for pause/resume across content sessions.                   */
/* --------------------------------------------------------------------- */

void xemu_lr_load_disc(const char *path, Error **errp)
{
    Error *error = NULL;

    /* Ensure an eject sequence is always triggered so Xbox software
     * reloads (matches ui/xemu.c xemu_load_disc). */
    xbox_smc_eject_button();
    qmp_blockdev_change_medium("ide0-cd1", NULL, path, "raw", false, false,
                               false, 0, &error);
    if (error) {
        error_propagate(errp, error);
    }
    xbox_smc_update_tray_state();
}

/* --------------------------------------------------------------------- */
/* Synchronous frame execution under icount: run the machine exactly one */
/* frame of virtual time per call, then hold it paused. This is the      */
/* normal-core contract -- retro_run performs one frame of emulation and */
/* returns when it is done. icount guarantees the vCPU stops precisely   */
/* at the deadline (the instruction budget is computed from it), and     */
/* sleep=off warps idle time straight to the deadline.                   */
/* --------------------------------------------------------------------- */

#define LR_FRAME_NS 16666667 /* 1/60 s, matches declared av_info timing */

static QEMUTimer *lr_frame_timer;
static QemuEvent  lr_frame_done;
static bool       lr_frame_inited;

static void lr_frame_cb(void *opaque)
{
    (void)opaque;
    pause_all_vcpus();
    qemu_event_set(&lr_frame_done);
}

void xemu_lr_run_frame(void)
{
    if (!lr_frame_inited) {
        qemu_event_init(&lr_frame_done, false);
        bql_lock();
        lr_frame_timer = timer_new_ns(QEMU_CLOCK_VIRTUAL, lr_frame_cb, NULL);
        /* The machine ran unpaced through boot; take ownership. */
        pause_all_vcpus();
        bql_unlock();
        lr_frame_inited = true;
    }

    qemu_event_reset(&lr_frame_done);
    bql_lock();
    timer_mod_ns(lr_frame_timer,
                 qemu_clock_get_ns(QEMU_CLOCK_VIRTUAL) + LR_FRAME_NS);
    resume_all_vcpus();
    bql_unlock();
    qemu_event_wait(&lr_frame_done);
}

void xemu_lr_frame_barrier_reset(void)
{
    /* Resident-session resume re-owns pacing on the next frame. */
    if (lr_frame_inited) {
        bql_lock();
        timer_del(lr_frame_timer);
        bql_unlock();
    }
}

void xemu_lr_audio_reset(void)
{
    if (!lr_audio.inited) {
        return;
    }
    qemu_mutex_lock(&lr_audio.lock);
    lr_audio.rd = lr_audio.wr = 0;
    lr_audio.level = 0;
    qemu_mutex_unlock(&lr_audio.lock);
}

/* ===================================================================== */
/* DISPLAY_TYPE_XEMU registration (replaces upstream's)                   */
/* ===================================================================== */

static void lr_gl_switch(DisplayChangeListener *dcl,
                         DisplaySurface *new_surface)
{
    (void)dcl;
    lr_con.surface = new_surface;
}

static bool lr_gl_check_format(DisplayChangeListener *dcl,
                               pixman_format_code_t format)
{
    (void)dcl;
    return format == PIXMAN_x8r8g8b8 || format == PIXMAN_a8r8g8b8;
}

static const DisplayChangeListenerOps lr_dcl_ops = {
    .dpy_name             = "xemu-libretro",
    .dpy_gfx_switch       = lr_gl_switch,
    .dpy_gfx_check_format = lr_gl_check_format,
};

static void lr_display_early_init(DisplayOptions *o)
{
    assert(o->type == DISPLAY_TYPE_XEMU);
    display_opengl = 1;
}

static void lr_display_init(DisplayState *ds, DisplayOptions *o)
{
    (void)ds;
    QemuConsole *con = qemu_console_lookup_by_index(0);
    assert(con != NULL);

    lr_con.dcl.ops = &lr_dcl_ops;
    lr_con.dcl.con = con;
    register_displaychangelistener(&lr_con.dcl);
}

static QemuDisplay qemu_display_xemu_lr = {
    .type       = DISPLAY_TYPE_XEMU,
    .early_init = lr_display_early_init,
    .init       = lr_display_init,
};

static void register_xemu_lr_display(void)
{
    qemu_display_register(&qemu_display_xemu_lr);
}
type_init(register_xemu_lr_display);

/* ===================================================================== */
/* Stubs for the excluded ImGui HUD layer (ui/xui)                        */
/* ===================================================================== */
#ifdef XEMU_LR_STUB_XUI

void xemu_queue_notification(const char *msg);
void xemu_queue_notification(const char *msg)
{
    fprintf(stderr, "[xemu] %s\n", msg ? msg : "");
}

void xemu_queue_error_message(const char *msg);
void xemu_queue_error_message(const char *msg)
{
    fprintf(stderr, "[xemu] ERROR: %s\n", msg ? msg : "");
}

/* ui/xemu-thumbnail.cc is HUD-only (it renders through xui GL helpers).
 * Snapshot save/load still works; thumbnails are simply absent. */
bool xemu_snapshots_load_png_to_texture(GLuint tex, void *buf, size_t size);
bool xemu_snapshots_load_png_to_texture(GLuint tex, void *buf, size_t size)
{
    (void)tex; (void)buf; (void)size;
    return false;
}

void *xemu_snapshots_create_framebuffer_thumbnail_png(size_t *size);
void *xemu_snapshots_create_framebuffer_thumbnail_png(size_t *size)
{
    if (size) {
        *size = 0;
    }
    return NULL;
}

#endif /* XEMU_LR_STUB_XUI */
