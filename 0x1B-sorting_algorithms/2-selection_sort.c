#include "sort.h"
#include <stddef.h>
#include <stdio.h>

/**
 * selection_sort - Selection Sort
 * @array: array
 * @size: Size
 */

void selection_sort(int *array, size_t size)

{
	size_t x, y, indxmin;

	for (y = 0; y < size - 1; ++y)
	{
		indxmin = y;
		x = y + 1;
		while (x < size)

		{
			if (array[x] < array[indxmin])
				indxmin = x;
			++x;
		}

		if (indxmin != y)

		{
			array[y] ^= array[indxmin];
			array[indxmin] ^= array[y];
			array[y] ^= array[indxmin];
			print_array(array, size);

		}
	}
}
