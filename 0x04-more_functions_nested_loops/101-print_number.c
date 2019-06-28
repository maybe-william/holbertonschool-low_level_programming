#include "holberton.h"
#include <math.h>

/**
 * print_number - Checks if an int is and uppercase letter.
 * @n: The int to print.
 *
 *
 */
void print_number(int n)
{
	int counter, neg, i;
	double num, temp, smallify;

	neg = 0;
	num = (double)n;
	if (n < 0)
	{
		neg = 1;
		num = -num;
	}
	temp = 0;
	counter = 0;
	while ((int)num != 0)
	{
		if ((num - 1000) > 0)
			smallify = num - 1000;
		else
			smallify = num;
		temp = (temp * 10) + ((int)smallify % 10);
		counter = counter + 1;
		num = (int)(num / 10);

	}
	if (!counter)
		_putchar('0');

	if (neg)
		_putchar('-');
	for (i = 0; i < counter; i++)
	{
		smallify = temp;
		if (((int)smallify % 10) + '0' != '(')
			_putchar(((int)smallify % 10) + '0');
		else
			_putchar('2');
		temp = (int)(temp / 10);
	}

}
