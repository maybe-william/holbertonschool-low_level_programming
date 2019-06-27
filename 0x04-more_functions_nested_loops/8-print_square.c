#include "holberton.h"

/**
 * print_square - Prints a square of a side length.
 *
 * @size: The side length of the diagonal
 *
 */
void print_square(int size)
{
	int i, j, m;

	m = size;
	if (m < 0)
		m = 0;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (i == 0)
		_putchar('\n');
}
