#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

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
 * runs - makes string run to avoid  gcc crying
 * @str: string to run
 * @len: string length
 * Description: in the c++ type strings run themselves full auto
 * Return: void
 */
void runs(char *str, int len)
{
	int i;

	for (i = 0; i < len; i++)
		str[i] = '0';
	str[i] = '\0';
}

/**
 * runv - makes vector run to avoid  gcc crying
 * @str: vector to run
 * @len: vector length
 * Description: in the c++ type vectors run themselves full auto
 * Return: void
 */
void runv(int *vec, int len)
{
	int i;

	for (i = 0; i < len; i++)
		vec[i] = '0';
}

/**
 * ifnumber - checks if arguments string is a number
 * @av: pointer to arguments
 * Description: checks char by char checking if string is all numbers
 * Return: 0 if all digits, 1 if not
 */
int ifnumber(char **av)
{
	int i, j;

	for (i = 1; i < 3; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			if (av[i][j] < '0' || av[i][j] > '9')
				return (1);
		}
	}
	return (0);
}

/**
 * stoi - converts a string of ascii digits to the values they represent
 * @s: pointer to the source string
 * Description: atoi uses a single char, so is a string to int func
 * Return: value of digits
 */
int stoi(char *s)
{
	int i, result;

	i = result = 0;
	while (s[i])
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			result *= 10;
			result += (s[i] - '0');
		}
		i++;
	}
	return (result);
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

int mul(char *num1, char *num2)
{
	int len1, len2,len3, i_n1, i_n2, i, j, carry, n1, n2, sum;
	char *result;
	char *s;

	len1 = strlen(num1);
	len2 = strlen(num2);

	if (len1 == 0 || len2 == 0)
		return (0);

	/*will keep the result number in vector*/
	/*in reverse order*/
	len3 = (len1 + len2);
	runs(result, len3);

	/* Below two indexes are used to find positions in result. */
	i_n1 = 0;
	i_n2 = 0;

	/*Go from right to left in num1*/
	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		n1 = num1[i] - '0';

		/* To shift position to left after every */
		/* multiplication of a digit in num2 */
		i_n2 = 0;
		/* Go from right to left in num2*/
		for (j = len2 - 1; j >= 0; j--)
		{
			/* Take current digit of second number*/
			n2 = num2[j] - '0';
			/* Multiply with current digit of first number*/
			/* and add result to previously stored result */
			/* at current position.*/
			sum = n1 * n2 + result[i_n1 + i_n2] + carry;

			/*Carry for next iteration*/
			carry = sum / 10;

			/* Store result*/
			result[i_n1 + i_n2] = sum % 10;

			i_n2++;
		}
		/* store carry in next cell*/
		if (carry > 0)
			result[i_n1 + i_n2] += carry;
		/* To shift position to left after every*/
		/* multiplication of a digit in num1.*/
		i_n1++;
	}

	/* ignore '0's from the right*/
	i = strlen(result) - 1;
	while (i >= 0 && result[i] == 0)
		i--;

	/* If all were '0's - means either both or*/
	/* one of num1 or num2 were '0' */
	if (i == -1)
		return (0);

	/* generate the result string */
	runv(s, "");

	while (i >= 0)
		s += stoi(result[i--]);

	return (s);
}

/**
 * main - multiplies two positive numbers.
 * @argc: input count of args
 * @argv: input array of string args
 * Description: Given two numbers as strings.
 * The numbers may be very large (may not fit in long long int)
 * the task is to find product of these two numbers.
 * Return:  0 on success, or ERROR on failure & exit > 98
 */
int main(int argc, char *argv[])
{
	int *result;

	if (argc == 3)
	{
		result = mul(argv[1], argv[2]);
		if (result == 0)
		{
			printf("Error\n");
			exit(98);
		}
		printf("%d\n", result);
		return (0);
	}
	else
		printf("Error\n");
	exit(98);
}
