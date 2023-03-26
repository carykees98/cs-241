/*
 * CS:APP Data Lab
 *
 * Cary Keesler - keeslecj
 *
 * bits.c - Source file with your solutions to the Lab.
 *          This is the file you will hand in to your instructor.
 *
 * WARNING: Do not include the <stdio.h> header; it confuses the dlc
 * compiler. You can still use printf for debugging without including
 * <stdio.h>, although you might get a compiler warning. In general,
 * it's not good practice to ignore compiler warnings, but in this
 * case it's OK.
 */

#if 0
/*
 * Instructions to Students:
 *
 * STEP 1: Read the following instructions carefully.
 */

You will provide your solution to the Data Lab by
editing the collection of functions in this source file.

INTEGER CODING RULES:
 
  Replace the "return" statement in each function with one
  or more lines of C code that implements the function. Your code 
  must conform to the following style:
 
  int Funct(arg1, arg2, ...) {
      /* brief description of how your implementation works */
      int var1 = Expr1;
      ...
      int varM = ExprM;

      varJ = ExprJ;
      ...
      varN = ExprN;
      return ExprR;
  }

  Each "Expr" is an expression using ONLY the following:
  1. Integer constants 0 through 255 (0xFF), inclusive. You are
      not allowed to use big constants such as 0xffffffff.
  2. Function arguments and local variables (no global variables).
  3. Unary integer operations ! ~
  4. Binary integer operations & ^ | + << >>
    
  Some of the problems restrict the set of allowed operators even further.
  Each "Ex  pr" may consist of multiple operators. You are not restricted to
  one operator per line.

  You are expressly forbidden to:
  1. Use any control constructs such as if, do, while, for, switch, etc.
  2. Define or use any macros.
  3. Define any additional functions in this file.
  4. Call any functions.
  5. Use any other operations, such as &&, ||, -, or ?:
  6. Use any form of casting.
  7. Use any data type other than int.  This implies that you
     cannot use arrays, structs, or unions.

 
  You may assume that your machine:
  1. Uses 2s complement, 32-bit representations of integers.
  2. Performs right shifts arithmetically.
  3. Has unpredictable behavior when shifting if the shift amount
     is less than 0 or greater than 31.


EXAMPLES OF ACCEPTABLE CODING STYLE:
  /*
   * pow2plus1 - returns 2^x + 1, where 0 <= x <= 31
   */
  int pow2plus1(int x) {
     /* exploit ability of shifts to compute powers of 2 */
     return (1 << x) + 1;
  }

  /*
   * pow2plus4 - returns 2^x + 4, where 0 <= x <= 31
   */
  int pow2plus4(int x) {
     /* exploit ability of shifts to compute powers of 2 */
     int result = (1 << x);
     result += 4;
     return result;
  }

FLOATING POINT CODING RULES

For the problems that require you to implement floating-point operations,
the coding rules are less strict.  You are allowed to use looping and
conditional control.  You are allowed to use both ints and unsigneds.
You can use arbitrary integer and unsigned constants. You can use any arithmetic,
logical, or comparison operations on int or unsigned data.

You are expressly forbidden to:
  1. Define or use any macros.
  2. Define any additional functions in this file.
  3. Call any functions.
  4. Use any form of casting.
  5. Use any data type other than int or unsigned.  This means that you
     cannot use arrays, structs, or unions.
  6. Use any floating point data types, operations, or constants.


NOTES:
  1. Use the dlc (data lab checker) compiler (described in the handout) to 
     check the legality of your solutions.
  2. Each function has a maximum number of operations (integer, logical,
     or comparison) that you are allowed to use for your implementation
     of the function.  The max operator count is checked by dlc.
     Note that assignment ('=') is not counted; you may use as many of
     these as you want without penalty.
  3. Use the btest test harness to check your functions for correctness.
  4. Use the BDD checker to formally verify your functions
  5. The maximum number of ops for each function is given in the
     header comment for each function. If there are any inconsistencies 
     between the maximum ops in the writeup and in this file, consider
     this file the authoritative source.

/*
 * STEP 2: Modify the following functions according the coding rules.
 * 
 *   IMPORTANT. TO AVOID GRADING SURPRISES:
 *   1. Use the dlc compiler to check that your solutions conform
 *      to the coding rules.
 *   2. Use the BDD checker to formally verify that your solutions produce 
 *      the correct answers.
 */

#endif
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
/*
 * evenBits - return word with all even-numbered bits set to 1
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 8
 *   Rating: 1
 */
int evenBits(void)
{
  /*
    0x5 is 0101 in binary so 8 of them fills the 32 bits of an integer
  */
  return 0x55 | (0x55 << 8) | (0x55 << 16) | (0x55 << 24);
}
/*
 * isEqual - return 1 if x == y, and 0 otherwise
 *   Examples: isEqual(5,5) = 1, isEqual(4,5) = 0
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 5
 *   Rating: 2
 */
int isEqual(int x, int y)
{
  /*
    the xor operation will return 0 if the numbers
    are equal and something else if they are not,
    the logical not make it so that if they are equal
    1 will be returned and if not 0 will be returned
  */
  return !(x ^ y);
}
/*
 * byteSwap - swaps the nth byte and the mth byte
 *  Examples: byteSwap(0x12345678, 1, 3) = 0x56341278
 *            byteSwap(0xDEADBEEF, 0, 2) = 0xDEEFBEAD
 *  You may assume that 0 <= n <= 3, 0 <= m <= 3
 *  Legal ops: ! ~ & ^ | + << >>
 *  Max ops: 25
 *  Rating: 2
 */
int byteSwap(int x, int n, int m)
{
  /* Creates a mask with byte n in m's original place and vice versa then combines those with and x whose n and m bytes have been cleared out */
  int xn, xm;
  int mask = (0xff << (n << 3)) | (0xff << (m << 3));

  xn = ((x >> (n << 3)) & 0xff) << (m << 3);
  xm = ((x >> (m << 3)) & 0xFF) << (n << 3);

  x = x & ~mask;

  return x | xm | xn;
}
/*
 * rotateRight - Rotate x to the right by n
 *   Can assume that 0 <= n <= 31
 *   Examples: rotateRight(0x87654321,4) = 0x187654321
 *   Legal ops: ~ & ^ | + << >> !
 *   Max ops: 25
 *   Rating: 3
 */
int rotateRight(int x, int n)
{
  /* Or's the products of two shifts, one right to clear space and one left that are the bits being rotated */

  return ((x >> n) & ~((0x1 << 31) >> (n + ~0))) | (x << (32 + (~n + 1)));
}
/*
 * logicalNeg - implement the ! operator, using all of
 *              the legal operators except !
 *   Examples: logicalNeg(3) = 0, logicalNeg(0) = 1
 *   Legal ops: ~ & ^ | + << >>
 *   Max ops: 12
 *   Rating: 4
 */
int logicalNeg(int x)
{
  /* compresses int into one bit that will be on if any of the bits are on. That bit is then flipped to result in 1 or 0 */

  x = x | (x >> 1);
  x = x | (x >> 2);
  x = x | (x >> 4);
  x = x | (x >> 8);
  x = x | (x >> 16);

  return (x ^ 0x1) & 0x1;
}
/*
 * TMax - return maximum two's complement integer
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 4
 *   Rating: 1
 */
int tmax(void)
{
  /* uses the arithmetic shifts ability to fill with 1's to create -1 and then xor with 1 shifted all the way left to make the number no longer negative */

  return ((0xff << 24) >> 24) ^ (1 << 31);
}
/*
 * sign - return 1 if positive, 0 if zero, and -1 if negative
 *  Examples: sign(130) = 1
 *            sign(-23) = -1
 *  Legal ops: ! ~ & ^ | + << >>
 *  Max ops: 10
 *  Rating: 2
 */
int sign(int x)
{
  /* Fills with all 1s or all 0s then or's with !!x which either has a value of 0 or 1 */
  return (x >> 31) | (!!x);
}
/*
 * isGreater - if x > y  then return 1, else return 0
 *   Example: isGreater(4,5) = 0, isGreater(5,4) = 1
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 24
 *   Rating: 3
 */
int isGreater(int x, int y)
{
  /* uses the sign bit to determine if y - x is negative, if it is, x is greater than y */
  int oppX = ~x + 1;
  int xMinInt = !(x ^ 0x1 << 31);
  int oppXSign = (oppX >> 31) & 0x1;
  int signOfY = (y >> 31) & 0x1;

  int yMinusX = y + oppX;
  int signOfYMinusX = (yMinusX >> 31) & 0x1;

  int didItOverflow = (!(signOfY ^ oppXSign)) & (signOfY ^ signOfYMinusX);

  return (!xMinInt) & (signOfYMinusX ^ didItOverflow);
}
/*
 * isPower2 - returns 1 if x is a power of 2, and 0 otherwise
 *   Examples: isPower2(5) = 0, isPower2(8) = 1, isPower2(0) = 0
 *   Note that no negative number is a power of 2.
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 20
 *   Rating: 4
 */
int isPower2(int x)
{
  /* when 1 is subtracted from a power of two and anded with itself you get all 0s, this checks for that and that the number is a non-zero positive */
  int sign = !(x >> 31);
  return (sign & (!(x & (x + (~0))) & (!!x)));
}
/*
 * satAdd - adds two numbers but when positive overflow occurs, returns
 *          maximum possible value, and when negative overflow occurs,
 *          it returns minimum negative value.
 *   Examples: satAdd(0x40000000,0x40000000) = 0x7fffffff
 *             satAdd(0x80000000,0xffffffff) = 0x80000000
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 30
 *   Rating: 4
 */
int satAdd(int x, int y)
{
  /* use bitwise and's ability to act like a conditional to either return a constant if there was an overflow or the sum of the addition */
  int maxInt = (~0) ^ (0x1 << 31);

  int xSign = (x >> 31) & 0x1;
  int ySign = (y >> 31) & 0x1;
  int sum = x + y;
  int sumSign = (sum >> 31) & 0x1;

  int overflowCheck = (((!(xSign ^ ySign)) & (xSign ^ sumSign)) << 31) >> 31;

  int overflowReturn = (maxInt + !sumSign) & overflowCheck;
  int sumReturn = sum & (~overflowCheck);

  return sumReturn | overflowReturn;
}
/* howManyBits - return the minimum number of bits required to represent x in
 *             two's complement
 *  Examples: howManyBits(12) = 5
 *            howManyBits(298) = 10
 *            howManyBits(-5) = 4
 *            howManyBits(0)  = 1
 *            howManyBits(-1) = 1
 *            howManyBits(0x80000000) = 32
 *  Legal ops: ! ~ & ^ | + << >>
 *  Max ops: 90
 *  Rating: 4
 */
int howManyBits(int x)
{
  int isXZero;
  int count = 0;
  int sign = x >> 31;

  x = (sign & ~x) | (~sign & x);
  isXZero = !(x ^ 0);

  /* narrows down the location of the first 1 in count by doing a binary search */
  count = (!!(x >> 16)) << 4;
  count = count | (!!(x >> (count + 8))) << 3;
  count = count | (!!(x >> (count + 4))) << 2;
  count = count | (!!(x >> (count + 2))) << 1;
  count = count | (x >> (count + 1));

  return count + ~isXZero + 3;
}
/*
 * floatIsLess - Compute f < g for floating point arguments f and g.
 *   Both the arguments are passed as unsigned int's, but
 *   they are to be interpreted as the bit-level representations of
 *   single-precision floating point values.
 *   If either argument is NaN, return 0.
 *   +0 and -0 are considered equal.
 *   Legal ops: Any integer/unsigned operations incl. ||, &&. also if, while
 *   Max ops: 30
 *   Rating: 3
 */
int floatIsLess(unsigned uf, unsigned ug)
{
  int MAX_INTEGER = (~0) ^ (0x1 << 31);
  int exponentMask = 0xff << 23;
  int fSign = uf >> 31 & 0x1;
  int gSign = ug >> 31 & 0x1;

  /* Checks for NaN and infinity */
  if ((uf & MAX_INTEGER) > exponentMask || (ug & MAX_INTEGER) > exponentMask || !((uf | ug) << 1))
    return 0;

  if (fSign > gSign || (gSign == fSign && ((gSign && ug < uf) || (!gSign && uf < ug))))
    return 1;

  return 0;
}
/*
 * floatFloat2Int - Return bit-level equivalent of expression (int) f
 *   for floating point argument f.
 *   Argument is passed as unsigned int, but
 *   it is to be interpreted as the bit-level representation of a
 *   single-precision floating point value.
 *   Anything out of range (including NaN and infinity) should return
 *   0x80000000u.
 *   Legal ops: Any integer/unsigned operations incl. ||, &&. also if, while
 *   Max ops: 30
 *   Rating: 4
 */
int floatFloat2Int(unsigned uf)
{
  int fSign = (uf >> 31) & 0x1;
  int fExponent = (uf >> 23) & 0xff;
  int unbiased = fExponent - 127;
  int fFraction = uf & ~((0x1 << 31) >> 8);
  int toReturn;

  /* Checks to see if the number is NaN, Infinity, or too large to represent with 32bits */
  if (fExponent == 0xff || (unbiased > 31))
    return 0x80000000;

  /* Checks to see if the number will be only a decimal*/
  if (unbiased < 0)
    return 0;

  if (unbiased <= 23)
    fFraction = fFraction >> (23 - unbiased);
  else
    fFraction = fFraction << (unbiased - 23);

  toReturn = (1 << unbiased) | fFraction;
  return fSign ? -toReturn : toReturn;
}
