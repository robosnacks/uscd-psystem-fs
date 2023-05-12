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

#include <lib/rcstring/list.h>


bool
rcstring_list::subset(const rcstring_list &arg)
    const
{
    //
    // test if "(*this) is a subset of (arg)"
    //
    if (nstrings > arg.nstrings)
        return false;
    for (size_t j = 0; j < nstrings; ++j)
    {
        if (!arg.member(string[j]))
            return false;
    }
    return true;
}