#include "sort.h"
#include <stddef.h>
#include <stdio.h>

/**
 * bubble_sort - Sort
 * @array: array
 * @size: size
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, x;
	int tmpvrbl;

	if (size == 0 || array == NULL)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (x = 0; x < size - 1 - i; x++)
		{
			if (array[x] > array[x + 1])
			{
				tmpvrbl = array[x + 1];
				array[x + 1] = array[x];
				array[x] = tmpvrbl;
				print_array(array, size);
			}
		}
		x = 0;
	}
}
