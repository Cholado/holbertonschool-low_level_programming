#include "holberton.h"
/**
 * main: Putchar "Holberton" & new line.
 * Description: no std libs.
 * Return: 0
 */
int main(void)
{
	char holberton[] = "Holberton";
	int i = 0;

	while (holberton[i] != '\0')
	{
		_putchar(holberton[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
