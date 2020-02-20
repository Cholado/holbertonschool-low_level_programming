#include "holberton.h"

/**
 * cap_string - capitalize all words of a string (up first letter if)
 * @str: string
 * Return: `str`
 */

char *cap_string(char *str)
{
	int i, c;
	int cap;
	char cases[] = ",;.!?(){}\n\t\" ";

	for (i = 0, cap = 0; str[i] != '\0'; i++)
	{
		if (str[0] > 96 && str[0] < 123)
			cap = 1;
		for (c = 0; cases[c] != '\0'; c++)
		{
			if (cases[c] == str[i])
				cap = 1;
		}
		if (cap)
		{
			if (str[i] > 96 && str[i] < 123)
			{
				str[i] -= 32;
				cap = 0;
			}
			else if (str[i] > 64 && str[i] < 91)
				cap = 0;
			else if (str[i] > 47 && str[i] < 58)
				cap = 0;
		}
	}
	return (str);
}
