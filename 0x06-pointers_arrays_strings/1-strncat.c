#include "holberton.h"

/**
 * _strncat - appends src to the dest string
 * @dest: string to append by src
 * @src: string to append to dest
 * @n: largest number of bytes to append
 *
 * Return: address of dest
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
