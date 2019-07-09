#include "holberton.h"


/**
 * _memset - Fill a region of memory with a single byte
 * @s: the pointer to memory to set
 * @b: the character to fill it with
 * @n: the number of bytes to fill
 *
 * Return: the pointer to the start of the mem area.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *x;
	int i;

	x = s;
	for (i = 0; i < n; i++)
		x[i] = b;

	return (s);
}
