#include "holberton.h"

/**
 * flip_bits - number of different bits between two numbers
 * @n: first number
 * @m: second number
 * Description: toggle bit using exclusive or operator
 * Return: number of bits you would need to flip to get the number right
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int compare;
	unsigned int toggle;

	toggle = 0;
	compare = n ^ m;

	while (compare)
	{
		if (compare & 1ul)
			toggle++;
		compare = compare >> 1;
	}
	return (toggle);
}
