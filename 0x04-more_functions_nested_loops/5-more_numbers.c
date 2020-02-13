#include "holberton.h"

/**
 * more_numbers - putchar numbers from 0 to 14 x10
 * Description: prints 01234567891011121314 ten times
 * Return: numbers
 */

void more_numbers(void);
{
	char c;
	int i;

		for (i = 0; i < 10; i++)
		{
			for (c = '0'; c <= '14'; c++)
			{
				_putchar(c)
			}
			_putchar('\n');
		}
}
