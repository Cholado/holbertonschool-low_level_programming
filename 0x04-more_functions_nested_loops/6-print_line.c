#include "holberton.h"

/**
 * print_line - putchar under line n times
 * @n: number of times the _ is printed
 * Description: prints _ by int n times
 * Return: void
 */

void print_line(int n);
{
	int i;

	if (n <= '0')
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
