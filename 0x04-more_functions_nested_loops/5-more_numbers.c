#include "holberton.h"

/**
 * more_numbers - putchar numbers from 0 to 14 x10
 * Description: prints 01234567891011121314 ten times
 * Return: numbers
 */

void more_numbers(void)
{
	int c, i;

	c = 0;
	while (c < 10)
	{
		i = 0;
		while (i < 15)
		{
			if (i > 9)
				_putchar(i / 10 + '0');

			_putchar(i % 10 + '0');
			i++;
		}
		c++;
		_putchar('\n');
	}
}
