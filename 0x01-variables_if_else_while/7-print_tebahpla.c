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
	char rev;

	for (rev = 'z'; rev <= 'a'; rev++)
		putchar(rev);
	putchar('\n');

	return (0);
}
