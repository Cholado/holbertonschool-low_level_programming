#include "holberton.h"

/**
 * print_last_digit - prints last digit of integer input
 * @n: integer to modify
 *
 * Return: l
 */

int print_last_digit(int n)
{
	int ne;

	if (n < 0)
	{
		ne = -1 * (n % 10);
		_putchar(ne + '0');
		return (ne);
	}
	else
	{
		ne = n % 10;
		_putchar(ne + '0');
		return (ne);
	}
}
