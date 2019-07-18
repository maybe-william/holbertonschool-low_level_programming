#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - get a malloc pointer
 * @b: the byte count
 *
 *
 * Return: the pointer to malloc'd memory.
 */
void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);
	if (!x)
		exit(98);
	return (x);
}
