#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - create an array initialized to a char value
 * @size: the size of the array
 * @c: the char to initialize to.
 *
 *
 *
 *
 *
 * Return: a pointer to the beginning of the array
 */
char *create_array(unsigned int size, char c)
{
	char *ret;
	unsigned int i;

	if (!size)
		return (0);

	ret = (char *)malloc(size * sizeof(c));
	if (!ret)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
	{
		ret[i] = c;
	}
	return (ret);
}
