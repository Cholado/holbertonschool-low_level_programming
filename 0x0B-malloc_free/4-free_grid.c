#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid previously created by alloc_grid function.
 * @grid: grid to free
 * @height: height of grid
 * Description: frees the memory space pointed to by ptr, of a prev malloc
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
