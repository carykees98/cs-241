# Homework 7 - Solutions

1. 2.17

    |  Hex  | Binary | Unsigned Int | Signed Int |
    | :---: | :----: | :----------: | :--------: |
    |  0xA  |  1010  |      10      |     -6     |
    |  0x1  |  0001  |      1       |     1      |
    |  0xB  |  1011  |      11      |     -5     |
    |  0x2  |  0010  |      2       |     2      |
    |  0x7  |  0111  |      7       |     7      |
    |  0xC  |  1100  |      12      |     -4     |

2. 2.19

    | x (Signed) | Unsigned |
    | :--------: | :------: |
    |     -1     |    15    |
    |     -5     |    11    |
    |     -6     |    10    |
    |     -4     |    12    |
    |     1      |    1     |
    |     8      |    8     |

3. 2.23

    |     w      |  fun1(w)   |  fun2(w)   |
    | :--------: | :--------: | :--------: |
    | 0x00000076 | 0x00000076 | 0x00000076 |
    | 0x87654321 | 0x00000021 | 0x00000021 |
    | 0x000000C9 | 0x000000C9 | 0xFFFFFFC9 |
    | 0xEDCBA987 | 0x00000087 | 0xFFFFFF87 |

    - fun1 returns only the lower 8 bits of the number passed to it limiting the number to beweeen 0 and 255.
    - fun2 takes out the lower 8 bits but also extends the sign bit limiting the number to between -127 and 127


4. 2.26
	1. The function will produce an error when the length of the second string is longer than the length of the first.
	2. If the length of the second string is longer than that of the first, it will cause an underflow because size_t is an unsigned integer which won't be able to hold a negative value meaning it will always be larger than or equal to 0
	3. ```
        int strlonger(char *s, char *t) {
            return strlen(s) > strlen(t);
        }
        ```

5. 2.31
    - Even if the math overflowed, by subtracting `y` or `x` back out from `sum`, you would be undoing the overflow so `sum - x` always equals `y` and `sum - y` always equals `x`
  
6. 2.34

    |  Signed  | X - Binary | X - Decimal | Y - Binary | Y - Decimal |    X * Y     | X * Y (Truncated) |
    | :------: | :--------: | :---------: | :--------: | :---------: | :----------: | :---------------: |
    | Unsigned |    100     |      4      |    101     |      5      | 20 (010 100) |      4 (100)      |
    |  Signed  |    100     |     -4      |    101     |     -3      | 12 (001 100) |     -4 (100)      |
    | Unsigned |    010     |      2      |    111     |      7      | 14 (001 110) |      6 (110)      |
    |  Signed  |    010     |      2      |    111     |     -1      | -2 (111 110) |     -2 (110)      |
    | Unsigned |    110     |      6      |    110     |      6      | 36 (100 100) |      4 (100)      |
    |  Signed  |    110     |     -2      |    110     |     -2      | 4 (000 100)  |     -4 (100)      |
