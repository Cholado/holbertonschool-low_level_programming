#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string (dest)
 * @s2: second string (src)
 * @n: number of bytes to include from src in dest
 * Description: append s2 into s1, uses at most n bytes from s2
 * Return: ptr to allocated memory, contains s1,
 * followed by the first n bytes of s2, null terminated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, l;
	char *s;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j] != '\0'; j++)
			;
	}
	k = i + n + 1;
	s = malloc(k * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (l = 0; l < i; l++)
		s[l] = s1[l];
	for (l = 0; l < j && n > 0; l++, n--)
		s[l + i] = s2[l];
	s[i + j] = '\0';
	return (s);
}
