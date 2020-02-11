#include "holberton.h"
/**
 * Entry point: _islower
 * Description: Check if lowercase letter on char "c"
 * Return: 0 or 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
