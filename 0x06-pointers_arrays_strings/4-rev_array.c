#include "holberton.h"

/**
 * reverse_array - Copies two strings up to n bytes.
 * @a: The array
 * @n: The length
 *
 *
 *
 */
void reverse_array(int *a, int n)
{
	int *a1;
	int temp, i;

	a1 = a;
	for (i = 0; i < (n / 2); i++)
	{
		temp = a1[i];
		a1[i] = a1[(n - 1) - i];
		a1[(n - 1) - i] = temp;
	}

}
