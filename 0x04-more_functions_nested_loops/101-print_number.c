#include "holberton.h"
#include <math.h>
#include <limits.h>
#include <stdio.h>

/**
 * print_number - Checks if an int is and uppercase letter.
 * @n: The int to print.
 *
 *
 */
void print_number(int n)
{
	int counter, neg, i;
	double num, temp;

	neg = 0;
	if (n < 0)
		neg = 1;

	num = fabs((double)n);
	temp = 0;
	counter = 0;
	while ((int)num != 0)
	{
		temp = (temp * 10) + fmod(num, 10);
		counter = counter + 1;
		num = floor(num / 10);
	}
	if (!counter)
		_putchar('0');

	if (neg)
		_putchar('-');
	for (i = 0; i < counter; i++)
	{
		_putchar((int)fmod(temp, 10) + '0');
		temp = floor(temp / 10);
	}

}
