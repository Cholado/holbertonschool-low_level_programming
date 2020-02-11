#include "holberton.h"
/**
 * Entry point: _abs
 * Description: display stdoutput absolut value of int
 * Return: n
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
