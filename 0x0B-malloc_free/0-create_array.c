#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Makes a string
 * @size: array size
 * @c: characters of the string
 * Description: creates array of chars, & initializes with a specific char
 * Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(size * sizeof(c));

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (i < size)
	{
		str[i] = c;
		i++;
	}
	str[i] = '\0';
	return (str);
}
