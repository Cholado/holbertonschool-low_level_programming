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
	char low = 'a';

	while (low <= 'z')
	{
		if (low != 'q' && low != 'e')
		{
			putchar(low);
		}
		low++;
	}
	putchar('\n');

	return (0);
}
