#include "holberton.h"

/**
 * print_diagonal - Prints a diagonal of a length.
 *
 * @n: The length of the diagonal
 *
 */
void print_diagonal(int n)
{
	int i, j, m;

	m = n;
	if (m < 0)
		m = 0;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (i == 0)
		_putchar('\n');
}
