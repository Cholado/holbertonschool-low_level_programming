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
	int h1;
	char h2;

	for (h1 = '0'; h1 <= '9'; h1++)
		putchar(h1);
	for (h2 = 'a'; h2 <= 'f'; h2++)
		putchar (h2);
	putchar('\n');

	return (0);
}
