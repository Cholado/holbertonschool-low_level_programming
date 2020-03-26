#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: number to set
 * @index: index at which to set bit
 * Description: dereference input to 0 using bitwise "NOT"
 * Return: 1 on success, or -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int msb;

	msb = (sizeof(unsigned long int) * 8 - 1);
	if (index > msb)
		return (-1);

	*n = *n & ~(1ul << index);
	return (1);
}
