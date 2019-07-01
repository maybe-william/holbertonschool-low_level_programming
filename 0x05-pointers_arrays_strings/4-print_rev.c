#include "holberton.h"


/**
 * print_rev - Prints the reverse of a string.
 * @s: The string.
 *
 *
 */
void print_rev(char *s)
{
	int len, i;

	len = 0;
	while (s[len] != '\0')
	{
		len = len + 1;
	}

	for (i = len - 1; i <= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
