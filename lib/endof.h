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

#ifndef LIB_ENDOF_H
#define LIB_ENDOF_H

#define SIZEOF(a) (sizeof(a)/sizeof(a[0]))
#define ENDOF(a) ((a) + SIZEOF(a))

#endif // LIB_ENDOF_H
