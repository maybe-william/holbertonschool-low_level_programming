#include "holberton.h"

/**
 * print_sign - Print the sign of a number and return an int
 * @n: the number to test
 *
* Return: if n > 0, 1. if n < 0, -1. if n == 0, 0.
 */
int print_sign(int n)
{
	int ret;
	char sign;

	if (n < 0)
	{
		ret = -1;
		sign = '-';
	}

	if (n > 0)
	{
		ret = 1;
		sign = '+';
	}

	if (n == 0)
	{
		ret = 0;
		sign = '0';
	}
	_putchar(sign);
	return (ret);
}
