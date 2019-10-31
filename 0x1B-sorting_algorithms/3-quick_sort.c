#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * partition - Partitions array
 * @w: w
 * @x: x
 * @y: y
 * @z: z
 * Return: return
 */

int partition(int *w, int x, int y, size_t z)
{
	int i = x, j = x, q, p;

	for (p = w[y]; i < y; i++)
	{
		if (w[i] <= p)
		{
			q = w[i];
			w[i] = w[j];
			w[j] = q;
			if (w[i] != w[j])
			{
				print_array(w, z);
			}
			j++;
		}

	}
	w[y] = w[j];
	w[j] = p;
	if (w[y] != w[j])
		print_array(w, z);
	return (j);
}

/**
 * recur_sort - Recursion
 * @w: w
 * @x: x
 * @y: y
 * @z: z
 * Return: Void
 */

void recur_sort(int *w, int x, int y, size_t z)
{
	int m;

	if (y - x <= 0)
		return;
	m = partition(w, x, y, z);
	recur_sort(w, x, m - 1, z);
	recur_sort(w, m + 1, y, z);
}

/**
 * quick_sort - Quick
 * @array: array
 * @size: size
 */

void quick_sort(int *array, size_t size)

{
	int end = (int)size;

	if (!array || size <= 2)
		return;
	end--;
	recur_sort(array, 0, end, size);
}
