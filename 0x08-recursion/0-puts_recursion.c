#include "holberton.h"

/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: String to print
 * Description: writes the string s and a trailing newline to stdout.
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
