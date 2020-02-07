#include <stdio.h>

/**
* main - while if else putchar line to stdout
* Description: uses putchar to output fixed message
* Return: 0
**/

int main(void)
{
	int n = '0';
	int m = '0';

	while (n <= '9')
	{
		while (m <= '9')
		{
			putchar(n);
			putchar(m);
			if (m == '9' && n == '9')
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
			m++;
		}
		if (m >= '9')
		{
			m = '0';
		}
		n++;
	}
	return (0);
}
