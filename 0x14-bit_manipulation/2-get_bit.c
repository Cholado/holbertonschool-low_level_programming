#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number to check bits in
 * @index: index at which to check bit
 * Description: step on index, read bit number value and prints it
 * Return: value of the bit, or -1 if there is an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int shift, compare, msb;
	/* most significant bit */
	msb = (sizeof(unsigned long int) * 8 - 1);
	if (index > msb)
		return (-1);
	shift = 1 << index;
	compare = n & shift;
	if (compare == shift)
		return (1);
	return (0);
}
