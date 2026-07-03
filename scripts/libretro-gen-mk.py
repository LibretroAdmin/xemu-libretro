#!/usr/bin/env python3
# libretro-gen-mk.py
#
# Convert a configured meson build directory (compile_commands.json + the
# ninja build graph) into a static GNU make manifest for the libretro
# core, so end users build with make + gcc alone -- no meson, no ninja.
#
# Usage:
#   python3 scripts/libretro-gen-mk.py <build-dir> <out.mk>
#
# The manifest preserves meson's object layout (lib*.a.p/...) and archive
# structure so the final link exactly mirrors the meson link line. Flags
# are deduplicated into flag-set variables. Include paths and libraries
# living outside the source/build trees (toolchain and pkg-config
# provided) are rewritten to plain -l flags plus $(DEP_CFLAGS)/
# $(DEP_LDFLAGS), which the top-level Makefile fills in at build time.
#
# SPDX-License-Identifier: GPL-2.0-or-later

import json
import os
import re
import shlex
import sys

DLL = 'xemu_libretro.dll'


def main():
    build_dir = os.path.abspath(sys.argv[1])
    out_path = sys.argv[2]
    src_dir = os.path.abspath(os.path.join(build_dir, os.pardir))

    def norm(p):
        q = os.path.normpath(p if os.path.isabs(p)
                             else os.path.join(build_dir, p))
        if q == build_dir or q.startswith(build_dir + os.sep):
            rel = os.path.relpath(q, build_dir)
            return '$(B)' if rel == '.' else '$(B)/' + rel
        if q == src_dir or q.startswith(src_dir + os.sep):
            rel = os.path.relpath(q, src_dir)
            if rel.startswith('subprojects' + os.sep):
                vrel = rel.split(os.sep, 1)[1]
                if os.path.exists(os.path.join(src_dir, 'libretro',
                                               'vendor', vrel)):
                    return '$(V)/' + vrel
            return '$(S)' if rel == '.' else '$(S)/' + rel
        return None

    # ---- compile database -------------------------------------------------
    with open(os.path.join(build_dir, 'compile_commands.json')) as f:
        db = json.load(f)

    flagsets = {}
    rules = []
    objs_by_dir = {}
    for e in db:
        args = shlex.split(e['command'])
        lang = 'CXX' if args[0].endswith(('++',)) else 'CC'
        flags, src, obj = [], None, None
        i = 1
        while i < len(args):
            a = args[i]
            if a == '-MD' or a.startswith('-fdiagnostics-color'):
                pass
            elif a in ('-MQ', '-MF'):
                i += 1
            elif a == '-o':
                obj = args[i + 1]; i += 1
            elif a == '-c':
                src = args[i + 1]; i += 1
            elif a.startswith('-I'):
                m = norm(a[2:])
                if m:
                    flags.append('-I' + m)
            elif a in ('-iquote', '-isystem', '-include', '-idirafter'):
                m = norm(args[i + 1])
                if m:
                    flags.append(a)
                    flags.append(m)
                i += 1
            elif a.startswith('/') or a.startswith('../'):
                m = norm(a)
                flags.append(m if m else a)
            else:
                if a.startswith('-D') and '="' in a:
                    # the value is a C string literal; wrap it in single
                    # quotes so the shell run by make preserves the double
                    # quotes (e.g. CONFIG_TARGET="...-config-target.h")
                    k, v = a.split('=', 1)
                    a = k + "='" + v + "'"
                flags.append(a)
            i += 1
        if src is None or obj is None:
            continue
        if '.exe.p/' in obj:
            continue  # subproject example/tool executables, not linked
        s = norm(src)
        if s is None:
            continue
        fs = ' '.join(flags)
        fs_id = flagsets.setdefault((lang, fs), len(flagsets))
        rules.append((obj, s, lang, fs_id))
        objs_by_dir.setdefault(os.path.dirname(obj), []).append(obj)

    # ---- dll link edge ------------------------------------------------------
    ninja = open(os.path.join(build_dir, 'build.ninja')).read()
    i = ninja.index('\nbuild %s: ' % DLL)
    j = ninja.index('\n', i + 1)
    edge = ninja[i + 1:j]
    link_args = None
    k = j
    while True:
        k2 = ninja.index('\n', k + 1)
        line = ninja[k + 1:k2]
        if not line.startswith(' '):
            break
        if line.strip().startswith('LINK_ARGS ='):
            link_args = line.split('=', 1)[1].strip()
        k = k2
    explicit = edge.split(': ', 1)[1].split(' | ')[0].split()[1:]  # drop rule
    link_objs = [t for t in explicit if t.endswith(('.obj', '.o'))]

    # ---- rewrite LINK_ARGS ---------------------------------------------------
    ext_lib_re = re.compile(r'lib(.+?)(\.dll)?\.a$')
    out_tokens = []
    for t in link_args.split():
        if t in ('-DXBOX=1', '-Wno-error', '-mwindows'):
            continue
        m = None
        if t.startswith('@'):
            mm = norm(os.path.join(build_dir, t[1:]))
            out_tokens.append('@' + mm if mm else t)
            continue
        if t.startswith('/') or t.startswith('../'):
            m = norm(t)
        elif not t.startswith('-') and re.search(r'\.(a|fa|def|syms|o|obj)$', t):
            # build-dir-relative file reference on the link line
            m = norm(os.path.join(build_dir, t))
        if m:
            out_tokens.append(m)
            continue
        if t.startswith('/'):
            mm = ext_lib_re.match(os.path.basename(t))
            out_tokens.append('-l' + mm.group(1) if mm else t)
            continue
        out_tokens.append(t)
    link_tail = ' '.join(out_tokens)

    # ---- archives (built in-tree from meson-layout objects) -----------------
    arch_re = re.compile(r'\$\(B\)/(\S+?\.(?:a|fa))(?=\s|$)')
    archives, seen = [], set()
    for m in arch_re.finditer(link_tail):
        rel = m.group(1)
        if rel in seen:
            continue
        seen.add(rel)
        members = sorted(objs_by_dir.get(rel + '.p', []))
        if members:
            archives.append((rel, members))

    with open(out_path, 'w') as out:
        w = out.write
        w('# Generated by scripts/libretro-gen-mk.py -- do not edit.\n')
        w('# Static build manifest for the xemu libretro core (win64).\n\n')
        for (lang, fs), fs_id in sorted(flagsets.items(), key=lambda kv: kv[1]):
            w('FS_%d := %s $(DEP_CFLAGS)\n' % (fs_id, fs))
        w('\n')
        for obj, src, lang, fs_id in rules:
            w('$(B)/%s: %s\n\t@mkdir -p $(@D)\n'
              '\t$(E) "CC      $(notdir $@)"\n'
              '\t$(Q)$(%s) $(FS_%d) -c -o $@ $<\n' % (obj, src, lang, fs_id))
        w('\n$(B)/version.rc_version.o: $(S)/version.rc $(B)/xemu-version-macro.h\n'
          '\t$(E) "WINDRES $(notdir $@)"\n'
          '\t$(Q)$(WINDRES) -I$(B) -I$(S) $< $@\n\n')
        w('LINK_OBJS := \\\n')
        for o in link_objs:
            w('  $(B)/%s \\\n' % o)
        w('\n')
        for rel, members in archives:
            w('$(B)/%s:' % rel + ''.join(' $(B)/%s' % m for m in members))
            w('\n\t@mkdir -p $(@D)\n\t$(E) "AR      $(notdir $@)"\n'
              '\t$(Q)$(AR) rcs $@ $^\n\n')
        w('LINK_ARCHIVES := %s\n\n' %
          ' '.join('$(B)/' + rel for rel, _ in archives))
        w('LINK_TAIL := %s\n' % link_tail)
    print('wrote %s: %d objects, %d flag sets, %d link objs, %d archives'
          % (out_path, len(rules), len(flagsets), len(link_objs), len(archives)))


if __name__ == '__main__':
    main()
