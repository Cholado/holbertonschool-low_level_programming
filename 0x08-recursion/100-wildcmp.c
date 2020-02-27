#include "holberton.h"
#include <stdio.h>

/**
 * wildcmp - compares two strings, one uses the * wildcard
 * @s1: first string
 * @s2: second string, may contain wildcard *
 * Description: Check if strings s1 and s2 can be considered identical
 * Return: 1 if match, 0 if not
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0' && *s1 == '\0')
/* Check if string is at end or not.*/
		return (1);
	if (*s2 == *s1)
/*Check for single character missing or match */
		return (wildcmp(s2 + 1, s1 + 1));
	if (*s2 == '*')
		return (wildcmp(s2 + 1, s1) || wildcmp(s2, s1 + 1));
/* Check for multiple character missing */
	return (0);
}
