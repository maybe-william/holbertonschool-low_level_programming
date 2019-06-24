#include "holberton.h"

/**
 * print_alphabet_x10 - Prints the alphabet and then a newline ten times.
 *
 */
void print_alphabet_x10(void)
{
	char *h;
	int i, j;

	for (j = 1; j <= 10; j++)
	{
		h = "abcdefghijklmnopqrstuvwxyz\n";
		for (i = 0; i <= 26; i++)
		{
			_putchar(h[i]);
		}
	}
}
