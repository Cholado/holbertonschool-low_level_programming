#include <stdio.h>
/**
 * print_diagsums - Prints sum of two diagonals of a two dimensional array
 * @a: Pointer to 2D array.
 * @size: Order diagonal to add.
 * Description: add axys of a 2D array to print in diagonal the output numbers.
 * Return: returns 0
 */

void print_diagsums(int *a, int size)
{
	int i, sumx, sumy;

	sumx = sumy = 0;
	for (i = 0; i < (size * size); i += size + 1)
		sumx += a[i];
	for (i = size - 1; i < (size * size - 1); i += size - 1)
		sumy += a[i];
	printf("%d, %d\n", sumx, sumy);
}
