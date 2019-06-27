#include "holberton.h"

/**
 * print_triangle - Prints a square of a base length.
 *
 * @size: The side length of the diagonal
 *
 */
void print_triangle(int size)
{
	int i, j, m;

	m = size;
	if (m < 0)
		m = 0;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (j >= ((m - i) - 1))
				_putchar('#');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}

	if (i == 0)
		_putchar('\n');
}
