#include "holberton.h"

/**
 * print_times_table - prints the 9 times table
 * @tab_size: The size of the table.
 *
 */
void print_times_table(int tab_size)
{
	int i, j, prod;
	char hunds, tens, ones;

	if (tab_size < 0 || tab_size > 15)
		return;
	for (i = 0; i <= tab_size; i++)
	{
		for (j = 0; j <= tab_size; j++)
		{
			prod = i * j;
			ones = (prod % 10) + 48;
			tens = ((prod / 10) % 10) + 48;
			hunds = (((prod / 10) / 10) % 10) + 48;
			if (tens == '0' && hunds == '0')
				tens = ' ';
			if (hunds == '0')
				hunds = ' ';
			if (j != 0)
			{
				_putchar(hunds);
				_putchar(tens);
			}
			_putchar(ones);
			if (j != tab_size)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
