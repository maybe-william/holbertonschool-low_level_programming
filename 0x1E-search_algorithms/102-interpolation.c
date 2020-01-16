#include "search_algos.h"

/**
 * get_mid - get the mid point given high and low
 * @array: the array
 * @low: the low index
 * @high: the high index
 * @value: the sought value
 * Return: the interpolated mid
 */
int get_mid(int *array, unsigned int low, unsigned int high, int value)
{
	double part1;
	int part2, part3;
	unsigned int mid;

	part1 = (double)(high - low);
	part2 = (array[high] - array[low]);
	part3 = (value - array[low]);

	mid = low + ((part1 / part2) * part3);
	return (mid);
}

/**
 * interpolation_search - function description
 * @array: parameter description
 * @size: parameter description
 * @value: parameter description
 * Return: return description
 */
int interpolation_search(int *array, size_t size, int value)
{
	unsigned int low = 0;
	unsigned int high = size - 1;
	unsigned int mid;

	if (!array)
		return (-1);

	while (1)
	{
		mid = get_mid(array, low, high, value);
		printf("Value checked array[%d] ", mid);
		if (mid >= size)
		{
			printf("is out of range\n");
			return (-1);
		}
		printf("= [%d]\n", array[mid]);
		if (array[mid] == value)
		{
			while (mid > 0 && array[mid - 1] == value)
			{
				mid--;
				printf("Value checked array[%d] = [%d]\n",
					 mid, value);
			}
			return (mid);
		}
		if (array[mid] < value)
			low = mid - 1;
		else
			high = mid + 1;
	}
	return (-1);
}
