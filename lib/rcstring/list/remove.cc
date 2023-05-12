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


void
rcstring_list::remove(const rcstring &w)
{
    for (size_t j = 0; j < nstrings; ++j)
    {
        if (string[j] == w)
        {
            remove(j);
            break;
        }
    }
}


void
rcstring_list::remove(size_t j)
{
    nstrings--;
    for (size_t k = j; k < nstrings; ++k)
        string[k] = string[k + 1];
    string[nstrings].clear();
}
