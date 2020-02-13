#include "holberton.h"

/**
 * print_square - putchar square # n times
 * @size: number of times the # axys is printed
 * Description: prints # by int n times in axys
 * Return: void
 */

void print_square(int size)
{
	int x, y;

	y = 0;

	if (size < 1)
		_putchar('\n');

	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			_putchar('#');
			x++;
		}
		_putchar('\n');
		y++;
	}
}
