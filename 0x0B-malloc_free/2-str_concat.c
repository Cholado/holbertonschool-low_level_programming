#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: dest string
 * @s2: src string
 * Description: appends the src string to the dest string.
 * Return: ptr to new memory contents of s1 adding s2 at end, ending null
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k, l;
	char *s;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}
	k = i + j + 1;
	s = malloc(k * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (l = 0; l < i; l++)
		s[l] = s1[l];
	for (l = 0; l < j; l++)
		s[l + i] = s2[l];
	s[i + j] = '\0';
	return (s);
}
