#include "holberton.h"

/**
 * print_line - Prints a line of a length.
 *
 * @n: The length of the line
 *
 */
void print_line(int n)
{
	int i, m;

	m = n;
	if (m < 0)
		m = 0;

	for (i = 0; i < m; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
