# xemu libretro core (experimental) — x64 Windows first

Build xemu as a libretro core. The core is a first-class build target:
`ui/xemu.c` (standalone `main()`, SDL window, ImGui HUD) is swapped for
`ui/xemu-libretro.c` + `ui/xemu-libretro-glue.c` by the `-Dlibretro`
meson option; the whole QEMU/NV2A machine is reused unchanged.

## Mapping to the standalone build

| Standalone (`ui/xemu.c`)               | libretro core                        |
|-----------------------------------------|--------------------------------------|
| `main()` spawns `qemu_main` thread      | `retro_load_game()`                  |
| SDL main loop: poll events + render     | `retro_run()`                        |
| SDL window + GL 4.0 context             | Hidden SDL window (NV2A needs GL)    |
| vblank thread → `graphic_hw_update()`   | One vblank per `retro_run()`         |
| SDL gamepad → `ControllerState`         | RetroPad → `INPUT_DEVICE_LIBRETRO`   |
| Blit NV2A texture to window             | `glGetTexImage` → XRGB8888 → `video_cb` |
| ImGui HUD                                | Excluded; notification API stubbed   |

## Building — x64 Windows (MSYS2 UCRT64)

Install xemu's usual Windows build dependencies (see the xemu docs), then:

    make -f Makefile.libretro

which is equivalent to:

    meson setup build-libretro -Dlibretro=true --prefer-static -Ddefault_library=static
    ninja -C build-libretro xemu_libretro

Result: `xemu_libretro.dll`. Install `libretro/xemu_libretro.info` next to
your frontend's other core info files.

## Runtime files

Place in the frontend **system directory** (names configurable via core
options): `mcpx_1.0.bin`, `Complex_4627.bin`, `xbox_eeprom.bin`,
`xbox_hdd.qcow2`. Load `.iso`/`.xiso` content. You must supply your own
legally-obtained BIOS/MCPX/EEPROM/HDD images.

## Status / TODO

- Video: GL readback (one copy/frame). TODO: zero-copy libretro HW render.
- Audio: plays via QEMU's SDL backend; silence fed to `audio_batch_cb` for
  frontend A/V sync. TODO: a libretro audiodev backend.
- Save states stubbed. TODO: bridge `ui/xemu-snapshots.c`.
- Port 1 (Duke) only; rumble not routed back to the frontend.
- Pre-NV2A VGA output (very early boot) presents black.
