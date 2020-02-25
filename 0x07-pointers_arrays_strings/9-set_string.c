#include "holberton.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to change
 * @to: string to change pointer to
 * Description: Dereference value of a pointer to an input char.
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
