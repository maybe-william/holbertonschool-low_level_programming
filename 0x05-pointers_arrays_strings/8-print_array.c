#include "holberton.h"
#include <stdio.h>

/**
 * print_array - Prints an array.
 * @a: The array.
 * @n: The length of the array.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != 0)
		{
			printf(", %i", a[i]);
		} else
		{
			printf("%i", a[i]);
		}
	}
	printf("\n");
}
