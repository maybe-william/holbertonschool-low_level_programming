#include "holberton.h"

/**
 * print_alphabet - Prints the alphabet and then a newline.
 *
 */
void print_alphabet(void)
{
	char *h;
	int i;

	h = "abcdefghijklmnopqrstuvwxyz\n";
	for (i = 0; i <= 26; i++)
	{
		_putchar(h[i]);
	}
}
