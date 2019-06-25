#include "holberton.h"

/**
 * times_table - prints the 9 times table
 *
 *
 */
void times_table(void)
{
	int i, j;
	int prod;
	char tens, ones;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			prod = i * j;
			ones = prod % 10;
			tens = (prod / 10) % 10;

			ones = ones + 48;
			tens = tens + 48;

			if (tens == '0')
				tens = ' ';

			_putchar(tens);
			_putchar(ones);
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('/n');
	}

}
