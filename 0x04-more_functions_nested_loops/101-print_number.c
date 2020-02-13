#include "holberton.h"

/**
 * print_number - a function that prints an integer
 * @n: input int
 * Return: inputted integer
 */

void print_number(int n)
{

	if (n < 0)
	{
		putchar('-');
		n = -n;
	}

	if (n == 0)
		putchar('0');

	if (n/10)
		printnumber(n/10);

	putchar(n%10 + '0');
}
