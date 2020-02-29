#include <stdio.h>

/**
 * main - prints program name
 * @argc: number of arguments
 * @argv: array of pointers to those arguments
 * Description: If rename program print new name without compile it again
 * Return:  0 if program success
 */

int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - argc]);
	return (0);
}
