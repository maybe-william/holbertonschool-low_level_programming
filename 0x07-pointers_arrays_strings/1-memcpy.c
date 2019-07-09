#include "holberton.h"


/**
 * _memcpy - Copy one memory region into another
 * @dest: the place to copy to
 * @src: the place to copy from
 * @n: the number of bytes to fill
 *
 * Return: the pointer to the start of the mem area.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *x;
	char *y;
	int i;

	x = dest;
	y = src;
	for (i = 0; i < n; i++)
		x[i] = y[i];

	return (s);
}
