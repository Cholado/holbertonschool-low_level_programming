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

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	printf("\n");

	return (0);
}
