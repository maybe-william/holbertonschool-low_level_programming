#include "holberton.h"

/**
 * print_last_digit - Print and return the last digit of an int.
 * @n: the number to calculate.
 *
* Return: The last digit of the value.
 */
int print_last_digit(int n)
{
	int temp;

	temp = (n % 10);
	if (temp < 0)
	{
		temp = temp * -1;
	}
	temp = temp + 48;

	_putchar(temp);
	return (temp);
}
