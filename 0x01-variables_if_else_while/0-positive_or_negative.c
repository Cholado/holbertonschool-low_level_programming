#include <stdio.h>

/**
 * main - if else printf line to stdout
 * Description: uses printf to output fixed message
 * Return: void
 */
int main(void)
{
	int n;

	if ( n > 0 ) {
		printf("is positive\n");
	}
	else ( n == 0) {
		printf("is zero");
	}
	else {
		printf("is negative");
	}
	return (0);
}
