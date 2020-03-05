#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: lesser number allowed
 * @max: upper number allowed
 * Description: makes buffer array of numeric chain min to max
 * Return: pointer to new array or NULL if failure
 */

int *array_range(int min, int max)
{
	int i, j;
	int *a;

	if (min > max)
		return (NULL);
	j = max - min + 1;
	a = malloc(j * sizeof(int));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < j; i++, min++)
	{
		a[i] = min;
	}
	return (a);
}
