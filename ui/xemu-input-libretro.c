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
#include "qemu/option.h"
#include "qobject/qdict.h"
#include "monitor/qdev.h"
#include "hw/qdev-core.h"
#include "qapi/error.h"
#include "ui/xemu-input.h"

/* Root-hub port for each player index (matches stock xemu-input.c). */
static const int port_map[4] = { 3, 4, 1, 2 };

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
        if (bound_controllers[index]->device) {
            Error *err = NULL;
            qdev_unplug((DeviceState *)bound_controllers[index]->device, &err);
            assert(err == NULL);
        }
        bound_controllers[index]->bound = -1;
        bound_controllers[index]->device = NULL;
        bound_controllers[index] = NULL;
    }
    if (!state) {
        return;
    }

    bound_controllers[index] = state;
    state->bound = index;

    /* The binding table alone is not a controller: the guest only sees
     * what enumerates on the USB bus. Mirror stock xemu-input.c --
     * a per-controller internal hub on the root hub port, and the
     * Duke (usb-xbox-gamepad) on that hub's port 1, carrying the
     * player index the xid device uses to fetch this state. */
    char *tmp;
    QDict *hub_qdict = qdict_new();
    qdict_put_str(hub_qdict, "driver", "usb-hub");
    tmp = g_strdup_printf("1.%d", port_map[index]);
    qdict_put_str(hub_qdict, "port", tmp);
    qdict_put_int(hub_qdict, "ports", 3);
    QemuOpts *hub_opts =
        qemu_opts_from_qdict(qemu_find_opts("device"), hub_qdict, &error_abort);
    DeviceState *hub_dev = qdev_device_add(hub_opts, &error_abort);
    g_free(tmp);

    QDict *qdict = qdict_new();
    qdict_put_str(qdict, "driver", DRIVER_DUKE);
    static int id_counter;
    tmp = g_strdup_printf("gamepad_%d", id_counter++);
    qdict_put_str(qdict, "id", tmp);
    g_free(tmp);
    qdict_put_int(qdict, "index", index);
    tmp = g_strdup_printf("1.%d.1", port_map[index]);
    qdict_put_str(qdict, "port", tmp);
    g_free(tmp);
    QemuOpts *opts =
        qemu_opts_from_qdict(qemu_find_opts("device"), qdict, &error_abort);
    DeviceState *dev = qdev_device_add(opts, &error_abort);
    assert(dev);

    qobject_unref(hub_qdict);
    object_unref(OBJECT(hub_dev));
    qobject_unref(qdict);
    object_unref(OBJECT(dev));

    state->device = dev;
    fprintf(stderr, "[xemu-lr] gamepad attached: player %d at usb 1.%d.1\n",
            index + 1, port_map[index]);
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
