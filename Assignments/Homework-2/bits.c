#include <stdio.h>

unsigned int rightRot(unsigned int x, const unsigned int n);

int main(int argc, char const *argv[])
{
	unsigned int x = 127, n = 7;
	printf("The number %u (0x%x in hexadecimal) is being right rotated by %i bits\n", x, x, n);
	unsigned int y = rightRot(x, n);
	printf("The result of the rotation is %u (0x%x in hexadecimal)\n", y, y);
	return 0;
}

unsigned int rightRot(unsigned int x, const unsigned int n)
{
	unsigned int mask = 0, i = 0;

	for (i = 0; i < n; i++)
	{
		mask = mask + (1 << i);
	}

	unsigned int rotatingBits = x & mask;

	x = x >> n;
	rotatingBits = rotatingBits << (32 - n);
	return x + rotatingBits;
}
