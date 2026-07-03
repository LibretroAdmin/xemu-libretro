# xemu libretro core (experimental) -- x64 Windows first

Build xemu as a libretro core with **make + gcc only**. No meson, no
ninja, no python, no pkg-config, and no dependency packages: every
third-party library is vendored in this repo and linked statically.

## Building -- x64 Windows (MSYS2 MINGW64)

    pacman -S mingw-w64-x86_64-gcc make      # the whole toolchain list

    make -f Makefile.libretro -j$(nproc)

Result: `xemu_libretro.dll`, importing only Windows system DLLs (strip
it for release). Knobs: `B=<builddir>`, `CROSS_PREFIX=x86_64-w64-mingw32-`
(cross builds from Linux), `V=1` (verbose), `EXTRA_LIBS=...`.

## How the static build works

- `libretro/mk/sources_win64.mk` -- the extracted build graph: per-object
  compile rules, deduplicated flag sets, meson-layout archive rules, the
  ordered link list and exact link line. Generated once from a configured
  meson tree by `scripts/libretro-gen-mk.py`.
- `libretro/pregen/` -- everything meson/QAPI/tracetool generate,
  seeded into the build dir at Makefile parse time.
- `libretro/vendor/` -- pruned sources of the meson wrap subprojects
  (glslang, curl, volk, imgui, tomlplusplus, ...).
- `libretro/deps/win64/` -- static libraries and headers for glib-2.0
  (+intl/iconv/pcre2), SDL3, epoxy, slirp, samplerate, zlib. Static
  archives only, so the core cannot pick up DLL dependencies. glib
  consumers compile with -DGLIB_STATIC_COMPILATION via DEP_CFLAGS.

After changing the tree, regenerate the manifest: configure with meson
(`./configure --target-list=i386-softmmu ...`, `meson configure
-Dlibretro=true`), then run
`python3 scripts/libretro-gen-mk.py <builddir> libretro/mk/sources_win64.mk`.

## Runtime files

Place in the frontend **system directory** (names configurable via core
options): `mcpx_1.0.bin`, `Complex_4627.bin`, `xbox_eeprom.bin`,
`xbox_hdd.qcow2`. Load `.iso`/`.xiso` content. Supply your own
legally-obtained images. `libretro/xemu_libretro.info` describes the core
and firmware to frontends.

## Architecture (vs upstream ui/xemu.c)

| Standalone                              | libretro core                        |
|-----------------------------------------|--------------------------------------|
| `main()` spawns `qemu_main` thread      | `retro_load_game()`                  |
| SDL main loop: poll events + render     | `retro_run()`                        |
| SDL window + GL 4.0 context             | Hidden SDL window (NV2A needs GL)    |
| vblank thread -> `graphic_hw_update()`  | One vblank per `retro_run()`         |
| SDL gamepad -> `ControllerState`        | RetroPad -> `INPUT_DEVICE_LIBRETRO`  |
| Blit NV2A texture to window             | `glGetTexImage` -> XRGB8888          |
| ImGui HUD                                | Excluded; notification API stubbed   |

## Status / TODO

- Video: GL readback (one copy/frame). TODO: zero-copy HW render.
- Audio: QEMU SDL backend; silence fed to `audio_batch_cb` for A/V sync.
- Save states stubbed; snapshot thumbnails absent under libretro.
- Port 1 (Duke) only; rumble not routed.
- Runtime bring-up (BIOS boot inside RetroArch) still to be validated.
