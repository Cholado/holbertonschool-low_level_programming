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
	int w = '0';

	while (n <= '7')
	{
		while (m <= '8')
		{
			while (w <= '9')
			{
				if (n < m && m < w)
				{
					putchar(n);
					putchar(m);
					putchar(w);
					if (!(n == '7' && m == '8' && w == '9'))
					{
						putchar(',');
						putchar(' ');
					}

				}
				w++;
			}
			w = '0';
			m++;
		}
		m = '0';
		n++;
	}
	putchar('\n');
	return (0);
}
