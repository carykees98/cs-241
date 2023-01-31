#include <stdio.h>
#include <ctype.h>

char peek()
{
	char c;

	c = getchar();
	ungetc(c, stdin);

	return c;
}

char getFloat(float *number)
{
	*number = 0;
	char c, sign;

	while (isspace(c = getchar()))
	{
	}

	if (c == EOF || (c != '+' && c != '.' && c != '-' && !isdigit(c)))
	{
		ungetc(c, stdin);
		return c;
	}

	if (c == '-' || c == '.')
	{
		if (c == '-')
			sign = c;
		else if (c == '.')
		{
			goto afterDecimal;
		}
	}

	if (peek() == '.')
	{
		getchar();
		goto afterDecimal;
	}

	while (isdigit(c = getchar()))
	{
		*number = *number * 10 + (c - '0');
	}

	if (c != '.')
	{
		if (sign == '-')
		{
			*number *= -1;
		}
		ungetc(c, stdin);
		return c;
	}
afterDecimal:
	int divisor = 10;
	while (isdigit(c = getchar()))
	{
		*number += (c - '0') / (float)divisor;
		divisor *= 10;
	}
	if (sign == '-')
	{
		*number *= -1;
	}
	ungetc(c, stdin);

	return c;
}

int main(int argc, char const *argv[])
{
	float number = 0;
	getFloat(&number);
	printf("The number is %f\n", number);
	return 0;
}
