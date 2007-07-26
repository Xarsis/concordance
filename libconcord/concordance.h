/*
    Copyright 2007 Kevin Timmerman

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*/

#ifndef harmony_h
#define harmony_h

#ifdef WIN32

#include <windows.h>

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned __int64 uint64_t;
//typedef bool int;

#else // not Windows

using namespace std;

#define LIBUSB

#define stricmp strcasecmp
#define strnicmp strncasecmp

#endif // end 'not Windows'

#include <string>

#endif // ifndef harmony_h