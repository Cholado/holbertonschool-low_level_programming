#include "holberton.h"

/**
 * bi_shift - prints the binary representation of a number
 * @n: number to print
 * Description: recursive calling the number shift right to print
 * Return: void
 */
void bi_shift(unsigned long int n)
{
	if (n == 0)
		return;
	bi_shift(n >> 1);
	if ((n & 1) == 1)
		_putchar('1');
	if ((n & 1) == 0)
		_putchar('0');
}

/**
 * print_binary - prints a number in binary notation
 * @n: number to print
 * Description: use right shift & check if 1 to expand to 2^31
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		bi_shift(n);
}
