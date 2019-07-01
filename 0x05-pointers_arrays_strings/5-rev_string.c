#include "holberton.h"


/**
 * print_rev - Prints the reverse of a string.
 * @s: The string.
 *
 *
 */
void print_rev(char *s)
{
	int len, i, counter;
	char swap1, swap2;

	len = 0;
	while (s[len] != '\0')
	{
		len = len + 1;
	}

	counter = 0;
	for (i = len - 1; i <= 0; i--)
	{
		swap1 = s[i];
		swap2 = s[counter];

		s[counter] = swap1;
		s[i] = swap2;
	}
}
