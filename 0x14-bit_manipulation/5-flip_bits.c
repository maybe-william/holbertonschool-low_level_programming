#include "holberton.h"

/**
 * flip_bits - function description
 * @n: parameter description
 * @m: parameter description
 * Return: return description
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor;
	unsigned long int flipnum = 0;

	xor = n ^ m;
	while (xor != 0)
	{
		if (xor & 1)
			flipnum++;
		xor = xor >> 1;
	}
	return (flipnum);
}
