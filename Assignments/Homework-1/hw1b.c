#include <stdio.h>

int main(int argc, char const *argv[])
{
	int one = 0, two = 0, three = 0, four = 0, five = 0;
	int sum = 0;

	printf("Please enter 5 numbers\n");
	scanf("%i %i %i %i %i", &one, &two, &three, &four, &five);

	sum = one + two + three + four + five;

	printf("The sum of your numbers is %i\n", sum);

	return 0;
}
