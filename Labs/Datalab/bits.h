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
int evenBits();
int test_evenBits();
int isEqual(int, int);
int test_isEqual(int, int);
int byteSwap(int, int, int);
int test_byteSwap(int, int, int);
int rotateRight(int, int);
int test_rotateRight(int, int);
int logicalNeg(int);
int test_logicalNeg(int);
int tmax();
int test_tmax();
int sign(int);
int test_sign(int);
int isGreater(int, int);
int test_isGreater(int, int);
int isPower2(int);
int test_isPower2(int);
int satAdd(int, int);
int test_satAdd(int, int);
int howManyBits(int);
int test_howManyBits(int);
int floatIsLess(unsigned, unsigned);
int test_floatIsLess(unsigned, unsigned);
int floatFloat2Int(unsigned);
int test_floatFloat2Int(unsigned);
