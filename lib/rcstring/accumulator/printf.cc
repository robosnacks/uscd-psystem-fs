//
// UCSD p-System filesystem in user space
// Copyright (C) 2006, 2007 Peter Miller
//
//      This program is free software; you can redistribute it and/or modify
//      it under the terms of the GNU General Public License as published by
//      the Free Software Foundation; either version 3 of the License, or
//      (at your option) any later version.
//
//      This program is distributed in the hope that it will be useful,
//      but WITHOUT ANY WARRANTY; without even the implied warranty of
//      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//      GNU General Public License for more details.
//
//      You should have received a copy of the GNU General Public License
//      along with this program. If not, see
//      <http://www.gnu.org/licenses/>.
//

#include <lib/rcstring/accumulator.h>



#include <cstdarg>
#include <cstdio> // for vsnprintf

#include <lib/rcstring/accumulator.h>


void
rcstring_accumulator::printf(const char *fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);
    char temp[1 << 11];
    vsnprintf(temp, sizeof(temp), fmt, ap);
    va_end(ap);
    push_back(temp);
}
