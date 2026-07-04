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

/* Call from context_reset (frontend GL context current): verifies GL
 * 4.0 core and performs NV2A's GL-touching context init. */
bool xemu_lr_gl_context_ready(void);

/* Pin this DLL against FreeLibrary: QEMU's resident threads outlive
 * retro_unload_game by design. */
void xemu_lr_pin_module(void);
void xemu_lr_display_finalize(void);

/* One guest vblank: pumps graphic_hw_update() under the BQL so NV2A
 * publishes a new framebuffer surface. Call once per retro_run. */
void xemu_lr_vblank(void);

/* Libretro audio sink (48kHz S16LE stereo): the MCPX APU pushes into
 * the ring, retro_run drains it into audio_batch_cb. */
void   xemu_lr_audio_init(void);
size_t xemu_lr_audio_queued(void);
void   xemu_lr_audio_push(const void *data, size_t bytes, float gain);
size_t xemu_lr_audio_drain(short *out, size_t max_frames);

/* Handshake with the QEMU thread (mirrors upstream semaphores). */
void xemu_lr_signal_display_init(void);
void xemu_lr_wait_display_init(void);
bool xemu_lr_try_wait_display_init(void); /* non-blocking; true once posted */
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
