#include "holberton.h"

/**
 * print_diagonal - putchar diagonal line n times
 * @n: number of times the \ is printed
 * Description: prints \ by int n times
 * Return: void
 */

void print_diagonal(int n);
{
	int i;
	int c;

	c = 0;
	if (n <= '0')
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar(92);
			for (c > 0; c <= i; c++)
			{
				_putchar(' ');
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
}
