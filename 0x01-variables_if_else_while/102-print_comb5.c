#include <stdio.h>

/**
* main - for if putchar line to stdout
* Description: uses putchar to output fixed message
* Return: 0
**/

int main(void)
{
	int n1;
	int n;
	int m1;
	int m;

	for (n1 = 48; ifirst < 58; n1++)
	{
		for (n = 48; n < 58; n++)
		{
			m = n + 1;
			m1 = n1;
			for (; m1 < 58; m1++)
			{
				for (; m < 58; m++)
				{
					putchar(n1);
					putchar(n);
					putchar(' ');
					putchar(m1);
					putchar(m);
					if (n1 != 57 || m1 != 57 || n != 56 || m != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
				m = 48;
			}
		}
	}
	putchar('\n');
	return (0);
}
