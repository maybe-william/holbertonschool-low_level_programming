#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of a diagonal
 * @x: the square field
 * @size: the length of said array
 *
 *
 *
 */
void print_diagsums(int *x, int size)
{
	int i, j, limit, sum1, sum2, val;

	limit = size;
	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < limit; i++)
	{
		for (j = 0; j < limit; j++)
		{
			val = *(x + (i * limit) + j);
			if (i == j)
				sum1 = sum1 + val;
			if (i == (limit - 1 - j))
				sum2 = sum2 + val;
		}
	}
	printf("%i, %i\n", sum1, sum2);
}
