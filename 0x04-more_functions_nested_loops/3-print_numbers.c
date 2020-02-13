#include "holberton.h"

/**
 * print_numbers - putchar numbers from 0 to 9
 * Description: prints 0123456789
 * Return: 1 if is digit, 0 if is not digit
 */

void print_numbers(void);
{
	char c;

		for (c >= '0'; c <= '9'; c++)
		{
			_putchar(c)
		}
	_putchar('\n');
}
