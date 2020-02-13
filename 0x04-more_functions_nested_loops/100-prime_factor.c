#include <math.h>
#include <stdio.h>

/**
 * main - prints the largest prime factor of
 * number 612852475143
 *
 * Return: 0;
 */

int main(void)
{
	long d, pf;
	long n;

	n = 612852475143;
	for (d = 2; d < sqrt(n); d++)
	{
		if ((n % d) == 0)
		{
			pf = d;
			n = n / d;
			d = 1;
		}
	}
	pf = n;
	printf("%ld\n", pf);
	return (0);

}
