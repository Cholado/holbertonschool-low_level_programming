#include "holberton.h"

/**
 * _idigit - checks if it is a digit
 * @c: int to check
 * Return: 1 if is digit, 0 if is not digit
 */


int _isupper(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
