/*
 * xemu libretro glue
 * ------------------
 * This file replaces ui/xemu.c in the libretro build. It provides:
 *
 *   1. The symbols the rest of the xemu tree expects ui/xemu.c to define
 *      (xemu_main_loop_lock/unlock, xemu_get_window, the DISPLAY_TYPE_XEMU
 *      QemuDisplay registration, init/shutdown semaphores).
 *   2. A hidden SDL window + GL 4.0 core context so the NV2A renderer can
 *      run headless inside a libretro frontend (nv2a_context_init() derives
 *      its shared contexts from this one, same as upstream).
 *   3. Stubs for the ImGui HUD layer (ui/xui), which is excluded from the
 *      libretro build — the frontend owns the UI.
 *
 * Target: x64 Windows first; the code itself is platform-neutral.
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

#include <SDL3/SDL.h>
#include <epoxy/gl.h>

#include "ui/xemu-settings.h"
#include "hw/xbox/nv2a/nv2a.h"
#include "xemu-libretro-glue.h"

static SDL_Window   *m_window;
static SDL_GLContext m_context;
static QemuSemaphore display_init_sem;
static QemuSemaphore display_shutdown_sem;
static bool          qemu_exiting;
static bool          sems_ready;

static struct {
    DisplayChangeListener dcl;
    DisplaySurface *surface;
} lr_con;

/* Declared in ui/xui/xemu-hud.h upstream; the HUD is excluded from
 * libretro builds so declare the symbols we provide here. */
void xemu_main_loop_lock(void);
void xemu_main_loop_unlock(void);
SDL_Window *xemu_get_window(void);
void xemu_queue_notification(const char *msg);
void xemu_queue_error_message(const char *msg);

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

SDL_Window *xemu_get_window(void)
{
    return m_window;
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
void xemu_lr_signal_display_shutdown(void) { ensure_sems(); qemu_sem_post(&display_shutdown_sem); }
void xemu_lr_wait_display_shutdown(void)   { ensure_sems(); qemu_sem_wait(&display_shutdown_sem); }

bool xemu_lr_display_early_init(void)
{
    ensure_sems();

    if (!SDL_Init(SDL_INIT_VIDEO)) {
        fprintf(stderr, "[xemu-lr] SDL_Init failed: %s\n", SDL_GetError());
        return false;
    }

    /* Same context attributes as upstream display_very_early_init(). */
    SDL_GL_SetAttribute(SDL_GL_RED_SIZE, 8);
    SDL_GL_SetAttribute(SDL_GL_GREEN_SIZE, 8);
    SDL_GL_SetAttribute(SDL_GL_BLUE_SIZE, 8);
    SDL_GL_SetAttribute(SDL_GL_ALPHA_SIZE, 8);
    SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 24);
    SDL_GL_SetAttribute(SDL_GL_STENCIL_SIZE, 8);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 4);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 0);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK,
                        SDL_GL_CONTEXT_PROFILE_CORE);
    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);

    m_window = SDL_CreateWindow("xemu-libretro", 640, 480,
                                SDL_WINDOW_OPENGL | SDL_WINDOW_HIDDEN);
    if (!m_window) {
        fprintf(stderr, "[xemu-lr] SDL_CreateWindow failed: %s\n",
                SDL_GetError());
        return false;
    }

    m_context = SDL_GL_CreateContext(m_window);
    if (!m_context || epoxy_gl_version() < 40) {
        fprintf(stderr, "[xemu-lr] need OpenGL 4.0 core (got %d)\n",
                m_context ? epoxy_gl_version() : 0);
        return false;
    }

    fprintf(stderr, "[xemu-lr] GL_RENDERER: %s\n", glGetString(GL_RENDERER));
    fprintf(stderr, "[xemu-lr] GL_VERSION:  %s\n", glGetString(GL_VERSION));

    /* NV2A creates its offscreen worker contexts shared with this one. */
    nv2a_context_init();
    SDL_GL_MakeCurrent(NULL, NULL);
    return true;
}

bool xemu_lr_make_gl_current(void)
{
    return m_window && m_context &&
           SDL_GL_MakeCurrent(m_window, m_context);
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
    SDL_GL_MakeCurrent(NULL, NULL);
    if (m_context) {
        SDL_GL_DestroyContext(m_context);
        m_context = NULL;
    }
    if (m_window) {
        SDL_DestroyWindow(m_window);
        m_window = NULL;
    }
    SDL_Quit();
    lr_con.dcl.con = NULL;
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
/* Stubs for the excluded ImGui HUD layer (ui/xui)                      */
/* Extend this section as the linker demands.                             */
/* ===================================================================== */
#ifdef XEMU_LR_STUB_XUI

void xemu_queue_notification(const char *msg)
{
    fprintf(stderr, "[xemu] %s\n", msg ? msg : "");
}

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
