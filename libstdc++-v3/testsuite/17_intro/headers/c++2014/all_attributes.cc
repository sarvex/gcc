// Copyright (C) 2015 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License along
// with this library; see the file COPYING3.  If not see
// <http://www.gnu.org/licenses/>.

// { dg-options "-std=gnu++14" }
// { dg-do compile }

// Ensure the library only uses the __name__ form for attributes.
// Don't test 'const' and 'noreturn' because they are reserved anyway.
#define abi_tag 1
#define always_inline 1
#ifndef __APPLE__
// darwin headers use these, see PR 64883
# define deprecated 1
# define visibility 1
#endif
#define packed 1
#define pure 1
#define unused 1

#include <bits/stdc++.h> // TODO: this is missing from <bits/extc++.h>
#include <shared_mutex>  // TODO: this is missing from <bits/stdc++.h>
#include <bits/extc++.h>

int
main()
{
}
