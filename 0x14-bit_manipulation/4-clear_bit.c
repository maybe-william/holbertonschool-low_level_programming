#include "holberton.h"

/**
 * clear_bit - function description
 * @n: parameter description
 * @index: parameter description
 * Return: return description
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return -1;
	*n = (*n & (~(1 << index)));
	return (1);
}
