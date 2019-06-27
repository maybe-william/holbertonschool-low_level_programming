#include "holberton.h"

/**
 * print_numbers - Prints 0-9.
 *
 *
 *
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}
