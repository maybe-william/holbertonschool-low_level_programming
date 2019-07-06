#include "holberton.h"

/**
 * print_number - Print an integer.
 * @n: The integer to print.
 */
void print_number(int n)
{
	int i, j, factor, place, digit, sign;

	place = 0;
	j = n;
	factor = 10;
	sign = 0;
	digit = 0;
	if (n < 0)
	{
		sign = 1;
		_putchar('-');
	}
	if (j >= 1000000000)
	{
		_putchar((j / 1000000000) + '0');
		j = j % 1000000000;
	}
	if (j <= -1000000000)
	{
		_putchar(((j / 1000000000) * -1) + '0');
		j = j % 1000000000;
	}
	while (j / factor != 0)
	{
		factor = factor * 10;
		place = place + 1;
	}
	while (place != -1)
	{
		digit = j % factor;
		for (i = 0; i < place; i++)
			digit = digit / 10;
		if (sign)
			digit = digit * -1;
		_putchar(digit + '0');
		factor = factor / 10;
		place = place - 1;
	}
}
