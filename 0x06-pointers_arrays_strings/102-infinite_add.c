#include "holberton.h"
/**
 * infinite_add - Adds two numbers
 * @n1: first input string
 * @n2: second input string
 * @r: pointer to buffer where result is stored
 * @size_r: requested size for the buffer
 * Return: pointer to buffer where result is stored
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0, index = 0, index2;
	char *s1 = n1, *s2 = n2;

	while (*s1 != 0)
		s1++;
	while (*s2 != 0)
		s2++;
	size_r--;
	r[size_r] = 0;
	s1--;
	s2--;
	while (s2 != n2 - 1 && s1 != n1 - 1)
	{
		r[index] = *s2 - '0' + *s1 + carry;
		carry = 0;
		if (r[index] > '9')
		{
			carry++;
			r[index] -= 10;
		}
		index++;
		s2--;
		s1--;
		if (size_r == index && (s1 != n1 - 1 || s2 != n2 - 1 || carry == 1))
			return (0);
	}
	while (s1 != n1 - 1)
	{
		r[index] = *s1 + carry;
		carry = 0;
		if (r[index] > '9')
		{
			carry = 1;
			r[index] -= 10;
		}
		s1--;
		index++;
		if (size_r == index && (s1 != n1 - 1 ||  carry == 1))
			return (0);
	}
	while (s2 != n2 - 1)
	{
		r[index] = *s2 + carry;
		carry = 0;
		if (r[index] > '9')
		{
			carry = 1;
			r[index] -= 10;
		}
		s2--;
		index++;
		if (size_r == index && (s2 != n2 - 1 || carry == 1))
			return (0);
	}
	if (carry == 1)
	{
		r[index] = '1';
		r[index + 1] = 0;
	}
	else
	{
		r[index--] = 0;
	}
	index2 = 0;
	while (index2 <= index)
	{
		carry = r[index];
		r[index] = r[index2];
		r[index2] = carry;
		index--;
		index2++;
	}
	return (r);
}
