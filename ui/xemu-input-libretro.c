/*
 * xemu input -- libretro implementation
 *
 * Replaces ui/xemu-input.c when building as a libretro core. The
 * frontend owns all physical input; the shim (ui/xemu-libretro.c)
 * translates RetroPad state directly into the bound ControllerState
 * each retro_run, so this file only maintains the binding table and
 * the small API surface the emulated USB devices consume.
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

#include "qemu/osdep.h"
#include "ui/xemu-input.h"

ControllerStateList available_controllers =
    QTAILQ_HEAD_INITIALIZER(available_controllers);
ControllerState *bound_controllers[4] = { NULL, NULL, NULL, NULL };

void xemu_input_init(void)
{
}

void xemu_input_bind(int index, ControllerState *state, int save)
{
    (void)save; /* no per-device mapping persistence under libretro */
    assert(index >= 0 && index < 4);
    if (bound_controllers[index]) {
        bound_controllers[index]->bound = -1;
    }
    bound_controllers[index] = state;
    if (state) {
        state->bound = index;
    }
}

ControllerState *xemu_input_get_bound(int index)
{
    assert(index >= 0 && index < 4);
    return bound_controllers[index];
}

int xemu_input_get_test_mode(void)
{
    return 0;
}

void xemu_input_set_test_mode(int enabled)
{
    (void)enabled;
}

void xemu_input_update_controller(ControllerState *state)
{
    /* State is written directly by the libretro shim each retro_run. */
    (void)state;
}

void xemu_input_update_controllers(void)
{
}

void xemu_input_update_rumble(ControllerState *state)
{
    /* TODO: route to RETRO_ENVIRONMENT_GET_RUMBLE_INTERFACE. */
    (void)state;
}
