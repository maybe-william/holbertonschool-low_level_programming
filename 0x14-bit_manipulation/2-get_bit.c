#include "holberton.h"

/**
 * get_bit - function description
 * @n: parameter description
 * @index: parameter description
 * Return: return description
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return -1;
	return ((n >> index) & 1);
}
