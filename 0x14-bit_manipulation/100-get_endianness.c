#include "holberton.h"

/**
 * get_endianness - function description
 * @void: parameter description
 * Return: return description
 */
int get_endianness(void)
{
	int q = 1;
	char *x = (char *)&q;

	if (x[0] == 1)
		return (1);
	return (0);
}
