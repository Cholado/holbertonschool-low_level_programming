#include "holberton.h"

/*
 * _strcat - appends the src string to the dest string.
 * @
 * Description: concatenates two strings. overwrite null & create new after
 * Return: dest output string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	i++;
	dest[i] = '\0';
	return (dest);
}
