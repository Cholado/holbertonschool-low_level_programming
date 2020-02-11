#include "holberton.h"
/**
 * Entry point: print_alphabet
 * Description: Putchar lowcase alphabet
 * Return: void
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
