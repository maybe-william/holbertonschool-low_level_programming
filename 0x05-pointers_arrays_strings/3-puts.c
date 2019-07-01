#include "holberton.h"


/**
 * _puts - Puts a string.
 * @s: The string.
 *
 */
void _puts(char *s)
{
	int ind;

	ind = 0;
	while (s[ind] != '\0')
	{
		_putchar(s[ind]);
	}
	_putchar('\n');
}
