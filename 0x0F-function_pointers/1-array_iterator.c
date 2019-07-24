#include "function_pointers.h"

/**
 * array_iterator - do something to each thing in an array
 * @array: the array
 * @size: the size of the array
 * @action: the function to do
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action)
	{
		if (array)
		{
			for (i = 0; i < size; i++)
				action(array[i]);
		}
	}
}
