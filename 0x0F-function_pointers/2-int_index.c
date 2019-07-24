#include "function_pointers.h"

/**
 * int_index - function description
 * @array: the array
 * @size: the number of elems
 * @cmp: the comparison function
 * Return: -1 or the index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index, i;

	index = -1;
	if (size > 0)
	{
		if (cmp)
		{
			if (array)
			{
				for (i = 0; i < size; i++)
				{
					if (cmp(array[i]) != 0)
					{
						index = i;
						break;
					}
				}
			}
		}
	}
	return (index);
}
