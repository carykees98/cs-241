#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i = 0;

loop:
	if (i % 2)
	{
		printf("Odd\n");
		goto inner;
	}
	printf("Even\n");
inner:
	i++;
	if (i < 10)
		goto loop;

	return 0;
}
