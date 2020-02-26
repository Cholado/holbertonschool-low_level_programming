#include "holberton.h"

/**
 * _strlen - return length of string
 * @str: string to check
 * Description: calculates length of string s, excluding end null byte
 * Return: length of str
 */
int _strlen(char *str)
{
	if (*str == '\0')
		return (0);
	else
		return (1 + _strlen(str + 1));
}

/**
 * check_palindrome - checks to see if a string is a palindrome
 * @l: left hand index
 * @r: right hand index
 * @p: possible palindrome
 * Description: validates if string is the same in reverse
 * Return: 1 if palindrome 0 if not
 */
int check_palindrome(int l, int r, char *p)
{
	if (l >= r)
		return (1);
	else if (p[l] != p[r])
		return (0);
	else
		return (check_palindrome(l + 1, r - 1, p));
}

/**
 * is_palindrome - states if a string is a palindrome
 * @s: string to check
 * Description: check if sequence of chars reads the same backward as forward
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int i;

	i = _strlen(s) - 1;
	return (check_palindrome(0, i, s));
}
