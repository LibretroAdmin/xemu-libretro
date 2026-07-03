/*
 * xemu libretro glue — interface between the libretro shim and the
 * replacement display/threading layer (which stands in for ui/xemu.c).
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 */
#ifndef XEMU_LIBRETRO_GLUE_H
#define XEMU_LIBRETRO_GLUE_H

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Hidden-window GL context for NV2A. Call before spawning the QEMU thread. */
bool xemu_lr_display_early_init(void);
void xemu_lr_display_finalize(void);
bool xemu_lr_make_gl_current(void);

/* One guest vblank: pumps graphic_hw_update() under the BQL so NV2A
 * publishes a new framebuffer surface. Call once per retro_run. */
void xemu_lr_vblank(void);

/* Handshake with the QEMU thread (mirrors upstream semaphores). */
void xemu_lr_signal_display_init(void);
void xemu_lr_wait_display_init(void);
void xemu_lr_signal_display_shutdown(void);
void xemu_lr_wait_display_shutdown(void);

/* Exit flag shared with the QEMU thread. */
void xemu_lr_set_exiting(bool v);
bool xemu_lr_is_exiting(void);

/* BQL wrappers (same semantics as upstream xemu_main_loop_lock/unlock). */
void xemu_lr_lock_main_loop(void);
void xemu_lr_unlock_main_loop(void);

#ifdef __cplusplus
}
#endif

#endif /* XEMU_LIBRETRO_GLUE_H */
