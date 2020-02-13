#include "holberton.h"

/**
 * print_triangle - putchar square # n times
 * @size: number of times the # half axys is printed
 * Description: prints # by int n half times in axys
 * Return: void
 */

void print_triangle(int size)
{
	int c, i, j;

	c = 0;
	i = size - 1;
	while (c < size)
	{
		i = size - 1 - c;
		j = c + 1;
		while (i > 0)
		{
			_putchar(' ');
			i--;
		}
		while (j > 0)
		{
			_putchar('#');
			j--;
		}
		_putchar('\n');
		c++;
	}

	if (size <= 0)
		_putchar('\n');
}
