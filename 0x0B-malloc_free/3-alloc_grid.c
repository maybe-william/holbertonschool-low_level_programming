#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - create a malloc'd 2d array
 * @width: the size of array
 * @height: the number of arrays
 *
 *
 *
 *
 *
 * Return: a pointer to the 2d array
 */
int **alloc_grid(int width, int height)
{
	int **ret;
	int *currentPointer;
	int i, j;

	if (width <= 0 || height <= 0)
		return (0);

	ret = (int **)malloc(height * sizeof(int *));
	if (ret == 0)
		return (0);

	for (i = 0; i < height; i++)
	{
		currentPointer = (int *)malloc(width * sizeof(int));
		if (currentPointer == 0)
			return (0);
		ret[i] = currentPointer;
		for (j = 0; j < width; j++)
		{
			currentPointer[j] = 0;
		}
	}
	return (ret);
}
