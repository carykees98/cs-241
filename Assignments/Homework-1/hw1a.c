#include <stdio.h>

int main(int argc, char const *argv[])
{
	FILE *file = fopen("numbers.txt", "r");
	int temp = 0;
	int finalSum = 0;
	int i;

	for (i = 0; i < 5; i++)
	{
		fscanf(file, "%i", &temp);
		finalSum += temp;
	}

	printf("The final sum is %i\n", finalSum);

	return 0;
}
