#include "holberton.h"
#include <stdio.h>
/**
 * Entry point: print_to_98
 * Description: printf from input int to 98
 * Return: void
 **/
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%i, ", n);
		if (n > 98)
			n--;
		else
			n++;
	}
	printf("98\n");
}
