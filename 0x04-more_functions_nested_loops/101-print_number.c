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

	if (n == 0)
		_putchar('0');

	while (intermediate != 0)
	{
		ones = intermediate % 10;
		tens = intermediate / 10;
		intermediate = tens;

		final = (10 * final) + ones;
	}

	if (final < 0)
		_putchar('-');
	while (final != 0)
	{
		ones = final % 10;
		tens = final / 10;
		if (ones < 0)
			ones = -ones;
		_putchar('0' + ones);
		final = tens;
	}
}
