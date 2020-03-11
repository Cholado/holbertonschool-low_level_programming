#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - searches for an integer.
 * @array: name of the array where to search
 * @size:number of elements in the array "array"
 * @cmp: pointer to the function to be used to compare values
 * Description: uses external function to search int in the input array.
 * Return: index of first element for which cmp function does not return 0
 * If no element matches, return -1 & If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, index;

	if (array)
	{
		if (size > 0)
		{
			if (cmp)
			{
				for (i = 0; i < size; i++)
				{
					index = cmp(array[i]);
					if (index != 0)
					{
						return (i);
					}
				}
			}
		}
	}
	return (-1);
}
