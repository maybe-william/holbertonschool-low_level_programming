#include "holberton.h"


/**
 * puts_half - Puts the last half of a string.
 * @s: The string.
 *
 */
void puts_half(char *s)
{
	int len, after, i;

	len = 0;
	while (s[len] != '\0')
	{
		len = len + 1;
	}

	after = len / 2;
	if (len % 2)
		after = after + 1;

	for (i = 0; i < len; i++)
	{
		if (i >= after)
			_putchar(s[i]);
	}



	_putchar('\n');
}
