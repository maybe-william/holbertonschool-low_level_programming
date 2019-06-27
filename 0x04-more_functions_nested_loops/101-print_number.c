#include "holberton.h"
#include <math.h>

/**
 * print_number - Checks if an int is and uppercase letter.
 * @n: The int to print.
 *
 *
 */
void print_number(int n)
{
	int intermediate, final, ones, tens;

	intermediate = n;
	if (n < 0)
	{
		_putchar('-');
		intermediate = -n;
	}
	if (n == 0)
		_putchar('0');

	while (intermediate != 0)
	{
		ones = intermediate % 10;
		tens = intermediate / 10;
		intermediate = tens;

		final = (10 * final) + ones;
	}

	while (final != 0)
	{
		ones = final % 10;
		tens = final / 10;
		_putchar('0' + ones);
		final = tens;
	}
}
