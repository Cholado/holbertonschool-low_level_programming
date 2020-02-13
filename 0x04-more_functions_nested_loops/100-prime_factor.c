#include <math.h>
#include <stdio.h>

/**
 * main - prints the largest prime factor of
 * number 612852475143
 *
 * Return: 0;
 */

long long main(long long)
{
	n = 612852475143;

	long long maxPrime = -1;

	while (n % 2 == 0)
	{
		maxPrime = 2;
		n >>= 1;
	}
	for (int i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			maxPrime = i;
			n = n / i;
		}
	}
	if (n > 2)
	{
	maxPrime = n;
	printf("%lld\n", n);
	}
	return (maxPrime);
}
