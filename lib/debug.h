//
// UCSD p-System filesystem in user space
// Copyright (C) 2006, 2007 Peter Miller
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or (at
// you option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
// General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this program. If not, see <http://www.gnu.org/licenses/>
//

#ifndef LIB_DEBUG_H
#define LIB_DEBUG_H

#include <lib/format_printf.h>

//
// Take this define out of comments to enable a number of debug messages
// scattered throughout the code.
//
#define DEBUG_ENABLED

extern int debug_level;
void debug_print(const char *file, int line, const char *fmt, ...)
                                                        FORMAT_PRINTF(3, 4);

#ifdef DEBUG_ENABLED
#define DEBUG(lvl, fmt, args...)                                           \
    do {                                                                   \
        if (lvl <= debug_level)                                            \
            debug_print(__FILE__, __LINE__, fmt, ## args);                 \
    } while (0)
#else
#define DEBUG(fmt, args...)                                                \
    ((void)0)
#endif

#endif // LIB_DEBUG_H
