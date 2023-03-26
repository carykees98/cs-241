#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define TMin INT_MIN
#define TMax INT_MAX

#include "btest.h"
#include "bits.h"

test_rec test_set[] = {
/* Copyright (C) 1991-2012 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
/* This header is separate from features.h so that the compiler can
   include it implicitly at the start of every compilation.  It must
   not itself include <features.h> or any other header that includes
   <features.h> because the implicit include comes before any feature
   test macros that may be defined in a source file before it first
   explicitly includes a system header.  GCC knows the name of this
   header in order to preinclude it.  */
/* We do support the IEC 559 math functionality, real and complex.  */
/* wchar_t uses ISO/IEC 10646 (2nd ed., published 2011-03-15) /
   Unicode 6.0.  */
/* We do not support C11 <threads.h>.  */
 {"evenBits", (funct_t) evenBits, (funct_t) test_evenBits, 0,
    "! ~ & ^ | + << >>", 8, 1,
  {{TMin, TMax},{TMin,TMax},{TMin,TMax}}},
 {"isEqual", (funct_t) isEqual, (funct_t) test_isEqual, 2,
    "! ~ & ^ | + << >>", 5, 2,
  {{TMin, TMax},{TMin,TMax},{TMin,TMax}}},
{"byteSwap", (funct_t) byteSwap, (funct_t) test_byteSwap, 3,
     "! ~ & ^ | + << >>", 25, 2,
    {{TMin, TMax},{0,3},{0,3}}},
 {"rotateRight", (funct_t) rotateRight, (funct_t) test_rotateRight,
   2, "! ~ & ^ | + << >>", 25, 3,
  {{TMin, TMax},{0,31},{TMin,TMax}}},
 {"logicalNeg", (funct_t) logicalNeg, (funct_t) test_logicalNeg, 1,
    "~ & ^ | + << >>", 12, 4,
  {{TMin, TMax},{TMin,TMax},{TMin,TMax}}},
 {"tmax", (funct_t) tmax, (funct_t) test_tmax, 0, "! ~ & ^ | + << >>", 4, 1,
  {{TMin, TMax},{TMin,TMax},{TMin,TMax}}},
 {"sign", (funct_t) sign, (funct_t) test_sign, 1, "! ~ & ^ | + << >>", 10, 2,
     {{-TMax, TMax},{TMin,TMax},{TMin,TMax}}},
 {"isGreater", (funct_t) isGreater, (funct_t) test_isGreater, 2,
    "! ~ & ^ | + << >>", 24, 3,
  {{TMin, TMax},{TMin,TMax},{TMin,TMax}}},
 {"isPower2", (funct_t) isPower2, (funct_t) test_isPower2, 1, "! ~ & ^ | + << >>", 20, 4,
  {{TMin, TMax},{TMin,TMax},{TMin,TMax}}},
 {"satAdd", (funct_t) satAdd, (funct_t) test_satAdd, 2,
    "! ~ & ^ | + << >>", 30, 4,
  {{TMin, TMax},{TMin,TMax},{TMin,TMax}}},
 {"howManyBits", (funct_t) howManyBits, (funct_t) test_howManyBits, 1, "! ~ & ^ | + << >>", 90, 4,
  {{TMin, TMax},{TMin,TMax},{TMin,TMax}}},
 {"floatIsLess", (funct_t) floatIsLess, (funct_t) test_floatIsLess, 2,
    "$", 30, 3,
     {{1, 1},{1,1},{1,1}}},
 {"floatFloat2Int", (funct_t) floatFloat2Int, (funct_t) test_floatFloat2Int, 1,
    "$", 30, 4,
     {{1, 1},{1,1},{1,1}}},
  {"", NULL, NULL, 0, "", 0, 0,
   {{0, 0},{0,0},{0,0}}}
};
