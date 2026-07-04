# ============================================================================
# Third-party dependencies built from source -- no binaries, no packages.
# Every library the core links (besides Windows system import libraries and
# the prebuilt dsp56300 Rust archive) compiles here from text committed
# under libretro/deps/src/, with the same CC/AR as everything else.
# ============================================================================

DEPSRC := $(S)/libretro/deps/src
DB     := $(B)/deps

# ---- zlib -------------------------------------------------------------------
ZLIB_SRC  := $(wildcard $(DEPSRC)/zlib/*.c)
ZLIB_OBJS := $(patsubst $(DEPSRC)/zlib/%.c,$(DB)/zlib/%.obj,$(ZLIB_SRC))
ZLIB_CFLAGS := -I$(DEPSRC)/zlib -O2 -DZLIB_CONST

# ---- libsamplerate ----------------------------------------------------------
SR_SRC  := $(wildcard $(DEPSRC)/libsamplerate/src/*.c)
SR_OBJS := $(patsubst $(DEPSRC)/libsamplerate/src/%.c,$(DB)/samplerate/%.obj,$(SR_SRC))
SR_CFLAGS := -I$(DEPSRC)/libsamplerate/include -I$(DEPSRC)/libsamplerate/src -O2 \
             -DPACKAGE='"libsamplerate"' -DVERSION='"0.2.2"' \
             -DENABLE_SINC_FAST_CONVERTER -DENABLE_SINC_MEDIUM_CONVERTER \
             -DENABLE_SINC_BEST_CONVERTER -DHAVE_STDBOOL_H

# ---- win-iconv (libiconv API) ------------------------------------------------
ICONV_OBJS := $(DB)/win-iconv/win_iconv.obj
ICONV_CFLAGS := -I$(DEPSRC)/win-iconv -O2 -DWINICONV_CONST=const

# ---- proxy-libintl (gettext API stub) ----------------------------------------
INTL_OBJS := $(DB)/proxy-libintl/libintl.obj
INTL_CFLAGS := -I$(DEPSRC)/proxy-libintl -O2 -DG_INTL_STATIC_COMPILATION

# ---- pcre2 (8-bit, for glib) ---------------------------------------------------
PCRE2_EXCL := pcre2_jit_compile.c pcre2_jit_test.c pcre2_dftables.c \
              pcre2test.c pcre2grep.c pcre2_jit_match.c pcre2_jit_misc.c \
              pcre2_fuzzsupport.c pcre2posix.c pcre2posix_test.c \
              pcre2_printint.c pcre2_ucptables.c
PCRE2_SRC  := $(filter-out $(addprefix $(DEPSRC)/pcre2/src/,$(PCRE2_EXCL)),\
              $(wildcard $(DEPSRC)/pcre2/src/*.c))
PCRE2_OBJS := $(patsubst $(DEPSRC)/pcre2/src/%.c,$(DB)/pcre2/%.obj,$(PCRE2_SRC)) \
              $(DB)/pcre2/pcre2_chartables.obj
PCRE2_CFLAGS := -I$(DB)/deps-hdr/pcre2 -I$(DEPSRC)/pcre2/src -O2 \
                -DHAVE_CONFIG_H -DPCRE2_CODE_UNIT_WIDTH=8 -DPCRE2_STATIC

# Shared include set consumers (QEMU tree) use:
GLIB_INC := -I$(DEPSRC)/glib -I$(DEPSRC)/glib/glib -I$(DEPSRC)/glib/cfg

# ---- glib (base library only) --------------------------------------------------
GLIB_SRC  := $(DEPSRC)/glib/glib/deprecated/gallocator.c \
             $(DEPSRC)/glib/glib/deprecated/gcache.c \
             $(DEPSRC)/glib/glib/deprecated/gcompletion.c \
             $(DEPSRC)/glib/glib/deprecated/grel.c \
             $(DEPSRC)/glib/glib/deprecated/gthread-deprecated.c \
             $(DEPSRC)/glib/glib/garcbox.c \
             $(DEPSRC)/glib/glib/garray.c \
             $(DEPSRC)/glib/glib/gasyncqueue.c \
             $(DEPSRC)/glib/glib/gatomic.c \
             $(DEPSRC)/glib/glib/gbacktrace.c \
             $(DEPSRC)/glib/glib/gbase64.c \
             $(DEPSRC)/glib/glib/gbitlock.c \
             $(DEPSRC)/glib/glib/gbookmarkfile.c \
             $(DEPSRC)/glib/glib/gbytes.c \
             $(DEPSRC)/glib/glib/gcharset.c \
             $(DEPSRC)/glib/glib/gchecksum.c \
             $(DEPSRC)/glib/glib/gconvert.c \
             $(DEPSRC)/glib/glib/gdataset.c \
             $(DEPSRC)/glib/glib/gdate.c \
             $(DEPSRC)/glib/glib/gdatetime-private.c \
             $(DEPSRC)/glib/glib/gdatetime.c \
             $(DEPSRC)/glib/glib/gdir.c \
             $(DEPSRC)/glib/glib/genviron.c \
             $(DEPSRC)/glib/glib/gerror.c \
             $(DEPSRC)/glib/glib/gfileutils.c \
             $(DEPSRC)/glib/glib/ggettext.c \
             $(DEPSRC)/glib/glib/ghash.c \
             $(DEPSRC)/glib/glib/ghmac.c \
             $(DEPSRC)/glib/glib/ghook.c \
             $(DEPSRC)/glib/glib/ghostutils.c \
             $(DEPSRC)/glib/glib/giochannel.c \
             $(DEPSRC)/glib/glib/giowin32.c \
             $(DEPSRC)/glib/glib/gkeyfile.c \
             $(DEPSRC)/glib/glib/glib-init.c \
             $(DEPSRC)/glib/glib/glib-private.c \
             $(DEPSRC)/glib/glib/glist.c \
             $(DEPSRC)/glib/glib/gmain.c \
             $(DEPSRC)/glib/glib/gmappedfile.c \
             $(DEPSRC)/glib/glib/gmarkup.c \
             $(DEPSRC)/glib/glib/gmem.c \
             $(DEPSRC)/glib/glib/gmessages.c \
             $(DEPSRC)/glib/glib/gnode.c \
             $(DEPSRC)/glib/glib/libcharset/localcharset.c \
             $(DEPSRC)/glib/glib/gnulib/isnanl.c \
             $(DEPSRC)/glib/glib/gnulib/isnand.c \
             $(DEPSRC)/glib/glib/gnulib/isnanf.c \
             $(DEPSRC)/glib/glib/gnulib/asnprintf.c \
             $(DEPSRC)/glib/glib/gnulib/printf-args.c \
             $(DEPSRC)/glib/glib/gnulib/printf-frexp.c \
             $(DEPSRC)/glib/glib/gnulib/printf-frexpl.c \
             $(DEPSRC)/glib/glib/gnulib/printf-parse.c \
             $(DEPSRC)/glib/glib/gnulib/printf.c \
             $(DEPSRC)/glib/glib/gnulib/vasnprintf.c \
             $(DEPSRC)/glib/glib/gnulib/xsize.c \
             $(DEPSRC)/glib/glib/goption.c \
             $(DEPSRC)/glib/glib/gpathbuf.c \
             $(DEPSRC)/glib/glib/gpattern.c \
             $(DEPSRC)/glib/glib/gpoll.c \
             $(DEPSRC)/glib/glib/gprimes.c \
             $(DEPSRC)/glib/glib/gprint.c \
             $(DEPSRC)/glib/glib/gprintf.c \
             $(DEPSRC)/glib/glib/gqsort.c \
             $(DEPSRC)/glib/glib/gquark.c \
             $(DEPSRC)/glib/glib/gqueue.c \
             $(DEPSRC)/glib/glib/grand.c \
             $(DEPSRC)/glib/glib/grcbox.c \
             $(DEPSRC)/glib/glib/grefcount.c \
             $(DEPSRC)/glib/glib/grefstring.c \
             $(DEPSRC)/glib/glib/gregex.c \
             $(DEPSRC)/glib/glib/gscanner.c \
             $(DEPSRC)/glib/glib/gsequence.c \
             $(DEPSRC)/glib/glib/gshell.c \
             $(DEPSRC)/glib/glib/gslice.c \
             $(DEPSRC)/glib/glib/gslist.c \
             $(DEPSRC)/glib/glib/gspawn-win32.c \
             $(DEPSRC)/glib/glib/gspawn.c \
             $(DEPSRC)/glib/glib/gstdio.c \
             $(DEPSRC)/glib/glib/gstrfuncs.c \
             $(DEPSRC)/glib/glib/gstring.c \
             $(DEPSRC)/glib/glib/gstringchunk.c \
             $(DEPSRC)/glib/glib/gstrvbuilder.c \
             $(DEPSRC)/glib/glib/gtestutils.c \
             $(DEPSRC)/glib/glib/gthread.c \
             $(DEPSRC)/glib/glib/gthreadpool.c \
             $(DEPSRC)/glib/glib/gtimer.c \
             $(DEPSRC)/glib/glib/gtimezone.c \
             $(DEPSRC)/glib/glib/gtrace.c \
             $(DEPSRC)/glib/glib/gtranslit.c \
             $(DEPSRC)/glib/glib/gtrashstack.c \
             $(DEPSRC)/glib/glib/gtree.c \
             $(DEPSRC)/glib/glib/gunibreak.c \
             $(DEPSRC)/glib/glib/gunicollate.c \
             $(DEPSRC)/glib/glib/gunidecomp.c \
             $(DEPSRC)/glib/glib/guniprop.c \
             $(DEPSRC)/glib/glib/guri.c \
             $(DEPSRC)/glib/glib/gutf8.c \
             $(DEPSRC)/glib/glib/gutils.c \
             $(DEPSRC)/glib/glib/guuid.c \
             $(DEPSRC)/glib/glib/gvariant-core.c \
             $(DEPSRC)/glib/glib/gvariant-parser.c \
             $(DEPSRC)/glib/glib/gvariant-serialiser.c \
             $(DEPSRC)/glib/glib/gvariant.c \
             $(DEPSRC)/glib/glib/gvarianttype.c \
             $(DEPSRC)/glib/glib/gvarianttypeinfo.c \
             $(DEPSRC)/glib/glib/gversion.c \
             $(DEPSRC)/glib/glib/gwakeup.c \
             $(DEPSRC)/glib/glib/gwin32.c
GLIB_OBJS := $(patsubst $(DEPSRC)/glib/%.c,$(DB)/glib/%.obj,$(GLIB_SRC))
GLIB_CFLAGS := -I$(DEPSRC)/glib/cfg -I$(DEPSRC)/glib -I$(DEPSRC)/glib/glib \
               \
               -I$(DEPSRC)/glib/glib/gnulib \
               -I$(DEPSRC)/pcre2/src -I$(DB)/deps-hdr/pcre2 \
               -I$(DEPSRC)/proxy-libintl -I$(DEPSRC)/win-iconv -O2 \
               -DGLIB_COMPILATION -DG_DISABLE_CAST_CHECKS -DG_LOG_DOMAIN='"GLib"' \
               -DPCRE2_STATIC -DPCRE2_CODE_UNIT_WIDTH=8 -DHAVE_CONFIG_H \
               -DUNICODE -D_UNICODE -DGLIB_CHARSETALIAS_DIR='"."' \
               -DG_INTL_STATIC_COMPILATION \
               -Wno-deprecated-declarations

# ---- libepoxy ---------------------------------------------------------------
EPOXY_SRC  := $(DEPSRC)/libepoxy/src/dispatch_common.c \
              $(DEPSRC)/libepoxy/src/dispatch_wgl.c \
              $(DEPSRC)/libepoxy/src/gl_generated_dispatch.c \
              $(DEPSRC)/libepoxy/src/wgl_generated_dispatch.c
EPOXY_OBJS := $(patsubst $(DEPSRC)/libepoxy/src/%.c,$(DB)/epoxy/%.obj,$(EPOXY_SRC))
EPOXY_CFLAGS := -I$(DB)/deps-hdr/epoxy -I$(DEPSRC)/libepoxy/include \
                -I$(DEPSRC)/libepoxy/src -O2 \
                -DENABLE_EGL=0 -DENABLE_GLX=0 -DENABLE_X11=0

# ---- libslirp ----------------------------------------------------------------
SLIRP_SRC  := $(wildcard $(DEPSRC)/libslirp/src/*.c)
SLIRP_OBJS := $(patsubst $(DEPSRC)/libslirp/src/%.c,$(DB)/slirp/%.obj,$(SLIRP_SRC))
SLIRP_CFLAGS := -I$(DEPSRC)/libslirp/src -I$(DB)/deps-hdr/slirp $(GLIB_INC) -O2 \
                -DBUILDING_LIBSLIRP -DLIBSLIRP_STATIC -DGLIB_STATIC_COMPILATION -DG_INTL_STATIC_COMPILATION -DG_LOG_DOMAIN='"Slirp"' \
                -DUNICODE -D_UNICODE


# ---- rules ---------------------------------------------------------------------
define dep_c_rule
$(DB)/$(1)/%.obj: $(2)/%.c
	@mkdir -p $$(@D)
	$$(E) "CC(dep) $$(notdir $$@)"
	$$(Q)$$(CC) $(3) -c -o $$@ $$<
endef
$(eval $(call dep_c_rule,zlib,$(DEPSRC)/zlib,$(ZLIB_CFLAGS)))
$(eval $(call dep_c_rule,samplerate,$(DEPSRC)/libsamplerate/src,$(SR_CFLAGS)))
$(eval $(call dep_c_rule,win-iconv,$(DEPSRC)/win-iconv,$(ICONV_CFLAGS)))
$(eval $(call dep_c_rule,proxy-libintl,$(DEPSRC)/proxy-libintl,$(INTL_CFLAGS)))
$(eval $(call dep_c_rule,pcre2,$(DEPSRC)/pcre2/src,$(PCRE2_CFLAGS)))
$(eval $(call dep_c_rule,epoxy,$(DEPSRC)/libepoxy/src,$(EPOXY_CFLAGS)))
$(eval $(call dep_c_rule,slirp,$(DEPSRC)/libslirp/src,$(SLIRP_CFLAGS)))

$(DB)/glib/%.obj: $(DEPSRC)/glib/%.c
	@mkdir -p $(@D)
	$(E) "CC(dep) $(notdir $@)"
	$(Q)$(CC) $(GLIB_CFLAGS) -c -o $@ $<


# pcre2 generated inputs: pcre2.h and config.h from the shipped .generic,
# chartables from the shipped .dist -- pure file copies, no configure.
$(DB)/deps-hdr/pcre2/pcre2.h: $(DEPSRC)/pcre2/src/pcre2.h.generic
	@mkdir -p $(@D)
	$(Q)cp $< $@
$(DB)/deps-hdr/pcre2/config.h: $(DEPSRC)/pcre2/src/config.h.generic
	@mkdir -p $(@D)
	$(Q)cp $< $@
$(DB)/pcre2/pcre2_chartables.obj: $(DEPSRC)/pcre2/src/pcre2_chartables.c.dist \
        $(DB)/deps-hdr/pcre2/pcre2.h $(DB)/deps-hdr/pcre2/config.h
	@mkdir -p $(@D)
	$(Q)cp $< $(DB)/pcre2/pcre2_chartables.c
	$(E) "CC(dep) pcre2_chartables.c"
	$(Q)$(CC) $(PCRE2_CFLAGS) -c -o $@ $(DB)/pcre2/pcre2_chartables.c
$(PCRE2_OBJS): $(DB)/deps-hdr/pcre2/pcre2.h $(DB)/deps-hdr/pcre2/config.h
$(GLIB_OBJS):  $(DB)/deps-hdr/pcre2/pcre2.h $(DB)/deps-hdr/pcre2/config.h

# epoxy config.h (normally meson-generated; only these matter on win32)
$(DB)/deps-hdr/epoxy/config.h:
	$(Q)mkdir -p $(@D)
	$(Q)printf '#define ENABLE_EGL 0\n#define ENABLE_GLX 0\n#define ENABLE_X11 0\n' > $@
$(EPOXY_OBJS): $(DB)/deps-hdr/epoxy/config.h

# slirp needs a version header (normally meson-generated). Created at
# parse time: QEMU tree consumers include it too, and under -j a rule
# would race their compiles.
ifeq ($(filter clean distclean,$(MAKECMDGOALS)),)
SLIRP_VER_H := $(shell mkdir -p $(DB)/deps-hdr/slirp && \
    printf '#ifndef LIBSLIRP_VERSION_H_\n#define LIBSLIRP_VERSION_H_\n#define SLIRP_MAJOR_VERSION 4\n#define SLIRP_MINOR_VERSION 9\n#define SLIRP_MICRO_VERSION 1\n#define SLIRP_VERSION_STRING "4.9.1"\n#define SLIRP_CHECK_VERSION(major,minor,micro) (SLIRP_MAJOR_VERSION > (major) || (SLIRP_MAJOR_VERSION == (major) && SLIRP_MINOR_VERSION > (minor)) || (SLIRP_MAJOR_VERSION == (major) && SLIRP_MINOR_VERSION == (minor) && SLIRP_MICRO_VERSION >= (micro)))\n#endif\n' \
    > $(DB)/deps-hdr/slirp/libslirp-version.h && echo ok)
endif

# ---- archives -------------------------------------------------------------------
define dep_archive
$(DB)/lib$(1).a: $(2)
	$$(E) "AR(dep) lib$(1).a"
	$$(file >$$@.rsp,$$^)
	$$(Q)sed -E -i 's#(^| |@|=|-L|-I)/([A-Za-z])/#\1\2:/#g' $$@.rsp
	$$(Q)$$(AR) rcs $$@ @$$@.rsp
endef
$(eval $(call dep_archive,z-dep,$(ZLIB_OBJS)))
$(eval $(call dep_archive,samplerate-dep,$(SR_OBJS)))
$(eval $(call dep_archive,iconv-dep,$(ICONV_OBJS)))
$(eval $(call dep_archive,intl-dep,$(INTL_OBJS)))
$(eval $(call dep_archive,pcre2-dep,$(PCRE2_OBJS)))
$(eval $(call dep_archive,glib-dep,$(GLIB_OBJS)))
$(eval $(call dep_archive,epoxy-dep,$(EPOXY_OBJS)))
$(eval $(call dep_archive,slirp-dep,$(SLIRP_OBJS)))

DEP_ARCHIVES := $(DB)/libepoxy-dep.a $(DB)/libslirp-dep.a \
                $(DB)/libsamplerate-dep.a $(DB)/libglib-dep.a $(DB)/libintl-dep.a \
                $(DB)/libiconv-dep.a $(DB)/libpcre2-dep.a $(DB)/libz-dep.a
