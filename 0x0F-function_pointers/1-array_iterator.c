#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 * @array: input array numbers
 * @size: size of the array
 * @action: pointer to the function you need to use
 * Description: iterates func all over an array
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array)
	{
		if (size)
		{
			for (i = 0; i < size; i++)
				action(array[i]);
		}
	}
}
