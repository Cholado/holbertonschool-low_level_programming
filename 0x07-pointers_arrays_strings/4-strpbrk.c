#include "holberton.h"

/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: Base string to check
 * @accept: String to match against
 * Description: find first char in s that match any char specified in accept
 * Return: ptr to char in s that match one char in accept, or NULL if no found.
 */

char *_strpbrk(char *s, char *accept);
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j])
			return (s + i);
	}
	return (0);
}
