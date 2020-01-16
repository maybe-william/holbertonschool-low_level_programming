#include "search_algos.h"
#include <stdio.h>

/**
 * my_print2 - print an array
 * @array: parameter description
 * @size: parameter description
 */
void my_print2(int *array, size_t size)
{
	unsigned int i = 0;

	if (!array)
		return;
	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		if (i)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}

/**
 * bsearch - binary search recursive
 * @array: the array
 * @size: the size
 * @value: the value to find
 * @acc: the indices before the current array
 * Return: the index of the sought value
 */
int bsearch(int *array, size_t size, int value, int acc)
{
	unsigned int mid;

	my_print2(array, size);
	if (size == 1)
	{
		if (array[0] == value)
			return (acc);
		else
			return (-1);
	}

	if (size % 2 == 0)
		mid = (size / 2) - 1;
	else
		mid = (size / 2);
	if (array[mid] == value)
		return (acc + mid);
	if (array[mid] > value)
		return (bsearch(array, mid, value, acc));
	return (bsearch(array + mid + 1, size - mid - 1, value, acc + mid + 1));
}

/**
 * exponential_search - function description
 * @array: parameter description
 * @size: parameter description
 * @value: parameter description
 * Return: return description
 */
int exponential_search(int *array, size_t size, int value)
{
	unsigned int last, curr;
	int val;

	if (!array)
		return (-1);

	last = 0;
	curr = 1;
	while (curr < size && array[curr] < value)
	{
		printf("Value checked array[%d] = [%d]\n", curr, array[curr]);
		last = curr;
		curr = curr * 2;
	}
	if (curr >= size)
		curr = size - 1;
	printf("Value found between indexes [%d] and [%d]\n", last, curr);

	val = bsearch(array + last, 1 + curr - last, value, 0);
	if (val == -1)
		return (-1);
	return (val + last);
}
