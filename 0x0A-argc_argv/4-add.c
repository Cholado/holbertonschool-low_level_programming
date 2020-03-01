#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - Adds positive numbers given to the program.
 * @argc: arguments
 * @argv: array pointing to arguments
 * Return: 0 if program success, or 1 if failure
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 1)
		return (0);

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
