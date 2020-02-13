#include "holberton.h"

/**
 * print_most_numbers - putchar numbers from 0 to 9 minus 2 & 4
 * Description: prints 01356789
 * Return: numbers
 */

void print_most_numbers(void);
{
	char c;

		for (c >= '0'; c <= '9'; c++)
		{
			if (c != 2 && c != 4)
			{
				_putchar(c)
			}
		}
	_putchar('\n');
}
