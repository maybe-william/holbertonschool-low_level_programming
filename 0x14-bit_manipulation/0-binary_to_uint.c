#include "holberton.h"
#include <stdio.h>

/**
 * binary_rec - recursively get a binary number.
 * @b: the number to convert to base 10
 * @acc: the hitherto accumulated value
 * Return: the number in base 10
 */
unsigned int binary_rec(const char *b, unsigned int acc)
{
	unsigned int x;

	if (b[0] == '\0')
		return (acc);
	x = binary_rec(b + 1, ((acc * 2) + (b[0] - '0')));
	return (x);
}


/**
 * binary_to_uint - function description
 * @b: parameter description
 * Return: return description
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;

	if (!b)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	return (binary_rec(b, 0));
}
