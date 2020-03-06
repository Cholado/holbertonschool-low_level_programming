#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _puts - print a string to stdout
 * @str: char array string type
 * Description: Can only use _putchar
 */

void _puts(char *str)
{
        int i;

        for (i = 0; str[i] != '\0'; i++)
        {
                _putchar(str[i]);
        }
        _putchar('\n');
}

/**
 * _strlen - return the length of the string
 * @s: char type pointer
 * Return: length of string
 */

int _strlen(char *s)
{
        int c;

        for (c = 0; s[c] != '\0'; c++)
                ;

        return (c);
}

/**
 * mul - multiplies two positive numbers.
 * @num1: first number to multiply
 * @num2: second number to multiply
 * Description: Given two numbers as strings.
 * The numbers may be very large (may not fit in long long int)
 * the task is to find product of these two numbers.
 * Return: 0 on success, or ERROR on failure & exit > 98
 */

char mul(char *num1, char *num2)
{
	int *ptr;
	char *k;
	char *s;
	int len1, len2, i, j, carry, n1, i_n1 = 0, n2, i_n2 = 0, sum;

	if (len1 == 0 || len2 == 0)
		return (0);
	len1 = _strlen(num1);
	len2 = _strlen(num2);
	ptr = (len1 + len2);
	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		n1 = num1[i] - '0';
		i_n2 = 0;

		for (j = len2 - 1; j >= 0; j--)
		{
			k = (i_n1 + i_n2, 0);
			n2 = num2[j] - '0';
			sum = n1 * n2 + k + carry;
			carry = sum / 10;
			k = sum % 10;
			i_n2++;
		}
		i = _strlen(k) - 1;
		while (i >= 0 && k[i] == 0)
			i--;
		if (i == -1)
			return (0);
		s = "";
		while (i >= 0)
			s += _itoa(k[i--]);
		_puts(s);
	}
	return (0);
}
