/*
 * Offscreen OpenGL abstraction layer -- WGL (native Windows) backend
 *
 * Used by libretro builds instead of sdl.c: contexts are created on
 * hidden native windows and share objects with whatever context is
 * current at creation time, matching the SDL backend's semantics.
 *
 * SPDX-License-Identifier: MIT
 */

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

#include "gloffscreen.h"

#include <windows.h>
#include <epoxy/gl.h>
#include <epoxy/wgl.h>

struct _GloContext {
    HWND  hwnd;
    HDC   hdc;
    HGLRC hglrc;
};

static void glo_register_class(void)
{
    static bool done;
    if (done) {
        return;
    }
    WNDCLASSA wc = {
        .style = CS_OWNDC,
        .lpfnWndProc = DefWindowProcA,
        .hInstance = GetModuleHandleA(NULL),
        .lpszClassName = "xemu_glo_wgl",
    };
    RegisterClassA(&wc);
    done = true;
}

GloContext *glo_context_create(void)
{
    GloContext *context = (GloContext *)calloc(1, sizeof(GloContext));
    assert(context != NULL);

    /* Share with the context current on this thread, like the SDL
     * backend (SDL_GL_SHARE_WITH_CURRENT_CONTEXT). */
    HGLRC share = wglGetCurrentContext();
    HDC   prev_dc = wglGetCurrentDC();

    glo_register_class();
    context->hwnd = CreateWindowA("xemu_glo_wgl", "xemu-glo", WS_POPUP,
                                  0, 0, 16, 16, NULL, NULL,
                                  GetModuleHandleA(NULL), NULL);
    assert(context->hwnd != NULL);
    context->hdc = GetDC(context->hwnd);

    PIXELFORMATDESCRIPTOR pfd = {
        .nSize = sizeof(pfd),
        .nVersion = 1,
        .dwFlags = PFD_DRAW_TO_WINDOW | PFD_SUPPORT_OPENGL | PFD_DOUBLEBUFFER,
        .iPixelType = PFD_TYPE_RGBA,
        .cColorBits = 32,
        .cAlphaBits = 8,
        .cDepthBits = 24,
        .cStencilBits = 8,
        .iLayerType = PFD_MAIN_PLANE,
    };
    int pf = ChoosePixelFormat(context->hdc, &pfd);
    assert(pf != 0);
    BOOL ok = SetPixelFormat(context->hdc, pf, &pfd);
    assert(ok);

    static const int attribs[] = {
        WGL_CONTEXT_MAJOR_VERSION_ARB, 4,
        WGL_CONTEXT_MINOR_VERSION_ARB, 0,
        WGL_CONTEXT_PROFILE_MASK_ARB, WGL_CONTEXT_CORE_PROFILE_BIT_ARB,
        0
    };
    context->hglrc = wglCreateContextAttribsARB(context->hdc, share, attribs);
    assert(context->hglrc != NULL);

    glo_set_current(context);
    (void)prev_dc;
    return context;
}

void glo_set_current(GloContext *context)
{
    if (context == NULL) {
        wglMakeCurrent(NULL, NULL);
    } else {
        wglMakeCurrent(context->hdc, context->hglrc);
    }
}

void glo_context_destroy(GloContext *context)
{
    if (!context) {
        return;
    }
    wglMakeCurrent(NULL, NULL);
    wglDeleteContext(context->hglrc);
    ReleaseDC(context->hwnd, context->hdc);
    DestroyWindow(context->hwnd);
    free(context);
}
