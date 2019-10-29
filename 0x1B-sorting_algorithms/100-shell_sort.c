#include "sort.h"


/**
 * get_knuth_n - get the nth value of the knuth sequence
 * @n: the n to get
 * @acc: the accumulated value
 * Return: the nth element of the knuth sequence
 */
unsigned int get_knuth_n(unsigned int n, unsigned int acc)
{
	if (acc <= 0)
		acc = 1;
	if (n == 1)
		return (acc);
	return (get_knuth_n(n - 1, (acc * 3) + 1));

}

/**
 * get_window_size - get the size of window to use for shell sort
 * @size: the array size
 * Return: the window size to use
 */
unsigned int get_window_size(unsigned int size)
{
	unsigned int i = 0, win_size = 0;

	while (win_size < (size))
	{
		i++;
		win_size = get_knuth_n(i + 1, 1);
	}

	return (i);
}

/**
 * shell_sort - sort using shell sort and the knuth sequence
 * @array: the array to sort
 * @size: the size of the array
 */
void shell_sort(int *array, size_t size)
{
	unsigned int sublen = 0, i = 0, subsorted = 0, c = 0, next = 0, n = 0;
	int temp = 0;

	if (size < 2 || array == NULL)
		return;

	for (n = get_window_size(size); n >= 1; n--)
	{
		sublen = get_knuth_n(n, 1);
		for (i = 0; i < sublen; i++)
		{
			subsorted = 0;
			while (!subsorted)
			{
				subsorted = 1;
				c = i;
				next = i + sublen;
				while (next < size)
				{
					if (array[c] > array[next])
					{
						subsorted = 0;
						temp = array[c];
						array[c] = array[next];
						array[next] = temp;
					}
					c = next;
					next = next + sublen;
				}
			}
		}
		print_array((const int *)array, size);
	}
}
