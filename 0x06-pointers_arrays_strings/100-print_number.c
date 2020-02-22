#include "holberton.h"

/**
 * print_number - takes an integer and prints it with _putchar
 * @n: integer to print
 *
 * Return: void
 */

void print_number(int n)
{

	char l;
	int r;
	char d;

	if (n < 0)
	{
		_putchar('-');
		l = ('0' - (n % 10));
		n /= -10;
	} else
	{
		l = ((n % 10) + '0');
		n /= 10;
	}
	r = 0;
	while (n > 0)
	{
		r = r * 10 + (n % 10);
		n /= 10;
	}

	while (r > 0)
	{
		d = ((r % 10) + '0');
		_putchar (d);
		r /= 10;
	}
	_putchar(l);
}
