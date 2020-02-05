#include <stdio.h>

/**
 * main - printf lines to stdout
 * Description: uses printf to output fixed message
 * Return: void
 * sizeof evaluates the size of a variable
 */
int main(void)
{
	char charType;
	int intType;
	long int longType;
	long long int longLongType;
	float floatType;

	printf("Size of a char: %1d byte(s)\n", sizeof(charType));
	printf("Size of a int: %1d byte(s)\n", sizeof(intType));
	printf("Size of a long int: %1d byte(s)\n", sizeof(longType));
	printf("Size of a long long int: %1d byte(s)\n", sizeof(longLongType));
	printf("Size of a float: %1d byte(s)\n", sizeof(floatType));
	return (0);
}
