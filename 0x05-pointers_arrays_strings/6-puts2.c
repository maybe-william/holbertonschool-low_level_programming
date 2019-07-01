#include "holberton.h"


/**
 * puts2 - Puts every other character in a string.
 * @s: The string.
 *
 */
void puts2(char *s)
{
	int ind, div2;

	ind = 0;
	div2 = 1;
	while (s[ind] != '\0')
	{
		if (div2)
		{
			_putchar(s[ind]);
		}
		div2 = (div2 + 1) % 2;
	}
	_putchar('\n');
}
