#include "holberton.h"

/**
 * _strchr - locate character in string
 * @s: string to check
 * @c: character to check for
 * Description: returns pointer to first occurrence of character c in string s.
 * Return: pointer to the first occurrence or NULL if character is not found.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (0);
}
