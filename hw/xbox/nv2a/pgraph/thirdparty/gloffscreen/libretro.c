/*
 * Offscreen OpenGL abstraction layer -- libretro backend
 *
 * Libretro cores do not own GL contexts: the frontend creates one and
 * guarantees it current on the libretro thread during retro_run and
 * the context callbacks. All pgraph GL work runs on that thread (the
 * pfifo pump), so every "context" here is a stand-in for the single
 * frontend context and switching is a no-op.
 *
 * SPDX-License-Identifier: MIT
 */

#include <stdlib.h>
#include <assert.h>

#include "gloffscreen.h"

struct _GloContext {
    int unused;
};

GloContext *glo_context_create(void)
{
    GloContext *context = (GloContext *)calloc(1, sizeof(GloContext));
    assert(context != NULL);
    return context;
}

void glo_set_current(GloContext *context)
{
    /* The frontend's context is already current on this thread. */
    (void)context;
}

void glo_context_destroy(GloContext *context)
{
    free(context);
}
