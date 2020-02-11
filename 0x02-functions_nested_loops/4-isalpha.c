#include "holberton.h"
/**
 * Entry point: _isalpha
 * Description:: Check if alphabet char on "c"
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
