#include "holberton.h"
#include <stdio.h>

/**
 * wildcmp - compares two strings, one uses the * wildcard
 * @s1: first string
 * @s2: second string, may contain wildcard *
 * Description: Check if strings s1 and s2 can be considered identical
 * Return: 1 if match, 0 if not
 */

int wildcmp(char *s1, char *s2);
{
	if (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
/*Check for single character missing or match */
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
/* Check if string is at end or not.*/
	if (*s2 == '*')
	{
		if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
			return (1);
		if (*(s1 + 1) != '\0' && *s2 == '\0')
			return (0);
/* Check for multiple character missing */
	}
	return (0);
}
