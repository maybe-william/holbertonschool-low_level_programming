#include "holberton.h"

/**
 * jack_bauer - Print every second of the day.
 *
 *
 */
void jack_bauer(void)
{
	int i, j, k, l;

	for (i = '0'; i <= '2'; i++)
		for (j = '0'; j <= '9'; j++)
			for (k = '0'; k <= '5'; k++)
				for (l = '0'; l <= '9'; l++)
				{
					if ((i == '2' && j <= '3') || i != '2')
					{
						_putchar(i);
						_putchar(j);
						_putchar(':');
						_putchar(k);
						_putchar(l);
						_putchar('\n');
					}
				}

}
