#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - make an array from min to max
 * @min: the min to start from
 * @max: the max to go to
 *
 * Return: the pointer to the malloc'd space
 */
int *array_range(int min, int max)
{
	int *ret;
	int i;

	if (min > max)
		return (NULL);

	ret = malloc(((max - min) + 1) * sizeof(int));
	if (ret == NULL)
		return (NULL);

	for (i = 0; (i + min) <= max; i++)
	{
		ret[i] = (i + min);
	}

	return (ret);
}
