#include "holberton.h"


/**
 * swap_int - Swaps two ints.
 * @a: One int.
 * @b: The second int.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
