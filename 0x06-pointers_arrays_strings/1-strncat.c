#include "holberton.h"

/*
 * _strncat - appends the src (n bytes) string to the dest string.
 * @
 * Description: concatenates two strings. if exist overwrite null
 * Return: dest output string
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len;
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	dest_len = i
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[dest_len + j] = src[j];
	}
	return (dest);
}
