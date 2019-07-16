#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - un-create a malloc'd 2d array
 * @grid: the 2d array
 * @height: the number of arrays
 *
 *
 *
 *
 *
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
