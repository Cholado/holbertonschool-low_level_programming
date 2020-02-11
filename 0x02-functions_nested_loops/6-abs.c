#include "holberton.h"

/**
 * _abs - outputs absolut value of integer input
 * @n: integer to check
 *
 * Return: n
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
