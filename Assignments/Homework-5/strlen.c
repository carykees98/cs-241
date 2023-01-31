#include <stdio.h>

int strLen(char *string)
{
	int length;
	char *currentChar = string;

	while (*currentChar != '\0')
		currentChar++;
	length = currentChar - string;

	return length;
}

int main(int argc, char const *argv[])
{
	char string[] = "This is a test string";
	printf("There are %i characters in the string \"%s\"\n", strLen(string), string);
	return 0;
}
