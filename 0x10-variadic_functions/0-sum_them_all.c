#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums the list of parameters.
 * @n: number of parameters
 * Description: sum of all its parameters by accesing valist
 * Return: sum of all parameters or if number of parameters is 0 returns 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list valist;

	va_start(valist, n);
	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);
	va_end(valist);
	return (sum);
}
