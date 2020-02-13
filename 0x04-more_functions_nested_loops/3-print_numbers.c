#include "holberton.h"

/**
 * print_numbers - putchar numbers from 0 to 9
 * Description: prints 0123456789
 * Return: void
 */

void print_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
