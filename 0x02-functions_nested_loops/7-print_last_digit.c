#include "holberton.h"
/**
 * Entry point: print_last_digit
 * Description: putchar last digit of int
 * Return: return value of last digit
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
