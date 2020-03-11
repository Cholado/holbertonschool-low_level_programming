#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - prints a name.
 * @name: ptr of chars (string) that holds the name
 * @f: ptr to function that will send to stdout the string
 * Description: takes name input and uses other function to print it
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if(name)
	{
		if (f)
		{
			(*f)(name);
		}
	}
}
