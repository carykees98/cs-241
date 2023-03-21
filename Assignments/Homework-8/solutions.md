# Homework 8 - Solutions

1. 2.48

    Hex `0x00359141` in binary is `0000 0000 0011 0101 1001 0001 0100 0001`.

    That has to be shifted 21 bits, so that we are left with only the leading `1` on the right side of the binary point, resulting in `1.101 0110 0100 0101 0000 0100`. Two additional zeros were added to fill the remaining places of the fraction portion.

    The leading one can be dropped since it is always present, resulting in `101 0110 0100 0101 0000 0100`.

    Because it was shifted 21 bits to the right, the exponent becomes 21.

    The bias then has to be applied by adding 127 to the 21 we have resulting in 148. 

    148 in binary is `1001 0100`. We then have to add the sign bit (`0` in this case because its positive) for the exponent making it `0 1001 0100`.

    The two portions are then combined to result in `0100 1010 0101 0110 0100 0101 0000 0100`.

    The bits after the leading `1` in the integer representation match the last 23 bits of the float representation, plus a few `0`s.

2. 2.49

    The smallest integer that would not be exact is `1 + 2 ^ (n + 1)`.

    If `n` were to be 23, then the smallest possible non-exact integer would be 16,777,217.`