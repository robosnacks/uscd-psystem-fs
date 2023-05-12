//
// UCSD p-System filesystem in user space
// Copyright (C) 2010 Peter Miller
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

#include <cstring>

#include <lib/rcstring.h>


bool
rcstring::operator<(const rcstring &rhs)
    const
{
    return (strcmp(c_str(), rhs.c_str()) < 0);
}


bool
rcstring::operator<=(const rcstring &rhs)
    const
{
    return (strcmp(c_str(), rhs.c_str()) <= 0);
}


bool
rcstring::operator>(const rcstring &rhs)
    const
{
    return (strcmp(c_str(), rhs.c_str()) > 0);
}


bool
rcstring::operator>=(const rcstring &rhs)
    const
{
    return (strcmp(c_str(), rhs.c_str()) >= 0);
}
