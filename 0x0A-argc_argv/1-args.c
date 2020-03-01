#include <stdio.h>

/**
 * main - prints arguments delivered to the program.
 * @argc: argument count
 * @argv: argument vector
 * Description: prints the number of arguments passed into it.
 * Return: 0 if program success
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	argv[0] = 0;
	return (0);
}
