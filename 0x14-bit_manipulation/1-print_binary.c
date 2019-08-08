#include "holberton.h"

/**
 * print_binary - function description
 * @n: parameter description
 */
void print_binary(unsigned long int n)
{
	unsigned long int remainder = n, digit = 0;

	while (remainder != 0)
	{
		digit = (remainder >> 1) & 1;
		remainder = remainder >> 1;
		_putchar(digit + '0');
	}
}
