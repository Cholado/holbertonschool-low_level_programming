#include "holberton.h"

/**
 * _pow_recursion - recursive returns the value of x raised to the power of y.
 * @x: base number
 * @y: exponent to raise number to
 * Description: repeated (y times) multiplication of x
 * Return: int number product
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, --y));
}
