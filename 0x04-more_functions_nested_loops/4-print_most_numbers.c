#include "holberton.h"

/**
 * print_most_numbers - putchar numbers from 0 to 9 minus 2 & 4
 * Description: prints 01356789
 * Return: numbers
 */

void print_most_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		if (i != 2 && i != 4)
			_putchar(i + '0');

		i++;
	}
	_putchar('\n');
}
