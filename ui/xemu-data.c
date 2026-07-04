/*
 * xemu Data File and Path Helpers
 *
 * Copyright (C) 2020-2021 Matt Borgerson
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifdef XEMU_LIBRETRO
#include <windows.h>
/* Directory containing the loaded core, forward slashes, trailing '/'. */
static const char *SDL_GetBasePath(void)
{
    static char path[MAX_PATH];
    extern HMODULE xemu_lr_module_handle(void);
    if (!path[0]) {
        GetModuleFileNameA(xemu_lr_module_handle(), path, sizeof(path));
        char *slash = strrchr(path, '\\');
        if (slash) {
            slash[1] = '\0';
        }
    }
    return path;
}
#else
#include <SDL3/SDL.h>
#endif
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#include "xemu-data.h"

static int path_exists(const char *path)
{
	FILE *fd = fopen(path, "rb");
	if (fd == NULL) return 0;
	fclose(fd);
	return 1;
}

const char *xemu_get_resource_path(const char *filename)
{
	// Allocate an arbitrarily long buffer for resource path storage FIXME: This
	// could be done better with a growing printf. Keep it simple for now.
	const size_t resource_path_buffer_len = 1024;
	static const char *sdl_base_path = NULL;
	static char *resource_path = NULL;

	if (!sdl_base_path) {
		sdl_base_path = SDL_GetBasePath();
	}

	if (!resource_path) {
		resource_path = malloc(resource_path_buffer_len);
		assert(resource_path != NULL);
	}

	// Try whichever location SDL deems appropriate
	snprintf(resource_path, resource_path_buffer_len, "%sdata/%s",
		sdl_base_path, filename);

	if (path_exists(resource_path)) {
		return resource_path;
	}

	// Try parent directory if launched from source root
	snprintf(resource_path, resource_path_buffer_len, "%s../data/%s",
		sdl_base_path, filename);

	if (path_exists(resource_path)) {
		return resource_path;
	}

#if defined(__linux__)
	// /usr/share/xemu/data when installed
	snprintf(resource_path, resource_path_buffer_len, "/usr/share/xemu/data/%s",
		filename);

	if (path_exists(resource_path)) {
		return resource_path;
	}
#endif

	// Path not found or file not readable
	assert(0);
	return NULL;
}
