#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i;
	for (i = 0; i < 10; i++)
	{
		if (i % 2)
			printf("Odd\n");
		else
			printf("Even\n");
	}

	return 0;
}
