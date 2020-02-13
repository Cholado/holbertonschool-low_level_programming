#include "holberton.h"

/**
 * print_line - putchar under line n times
 * @n: number of times the _ is printed
 * Description: prints _ by int n times
 * Return: void
 */

void print_line(int n)
{
	int c;

	c = 0;
	while (c < n)
	{
		_putchar('_');

		c++;
	}
	_putchar('\n');
}
