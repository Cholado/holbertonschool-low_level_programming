#include "holberton.h"

/**
 * _strstr - locate a substring
 * @haystack: string to be scanned.
 * @needle: small string to be searched with-in haystack string.
 * Description: function find first occurrence of substring needle in haystack
 * Return: pointer to beginning of located substring, or NULL if not found.
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
