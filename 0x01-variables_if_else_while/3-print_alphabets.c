#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - for  putchar line to stdout
* Description: uses putchar to output fixed message
* Return: 0
**/

int main(void)
{
	char low;
	char up;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	for (up = 'A'; up <= 'Z'; up++)
		putchar (up);
	printf("\n");

	return (0);
}
