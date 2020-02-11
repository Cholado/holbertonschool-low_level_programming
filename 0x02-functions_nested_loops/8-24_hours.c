#include "holberton.h"
/**
 * Entry point: jack_bauer
 * Description: putchar  display clock timer for 24 hour
 * Return: void
 */
void jack_bauer(void)
{
	int h, m, i, j, k, l;

	for (h = 0; h < 24; h++)
	{
		i = h / 10;
		j = h % 10;
		for (m = 0; m < 60; m++)
		{
			k = m / 10;
			l = m % 10;
			_putchar('0' + i);
			_putchar('0' + j);
			_putchar(':');
			_putchar('0' + k);
			_putchar('0' + l);
			_putchar('\n');
		}
	}
}
