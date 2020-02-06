#include <stdio.h>

/**
 * main - write line to stdout
 * Description: uses write to output fixed message
 * Return: 1
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 61);
	return (1);
}
