#include "holberton.h"

/**
 * print_number - Print an integer.
 * @n: The integer to print.
 */
void print_number(int n)
{
	int i, j, factor, place, digit, sign, maxmod;

	place = 0;
	j = n;
	factor = 10;
	sign = 0;
	digit = 0;
	maxmod = 1000;
	maxmod = maxmod * 1000 * 1000;
	if (n < 0)
	{
		sign = 1;
		_putchar('-');
	}
	if (j >= maxmod)
	{
		_putchar((j / maxmod) + '0');
		j = j % maxmod;
	}
	if (j <= -1 * maxmod)
	{
		_putchar(((j / maxmod) * -1) + '0');
		j = j % maxmod;
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
