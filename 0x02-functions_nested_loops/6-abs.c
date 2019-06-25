#include "holberton.h"

/**
 * _abs - Return the abs of an int.
 * @n: the number to calculate.
 *
* Return: The abs of the value.
 */
int _abs(int n)
{
	int mult;

	mult = 1;
	if (n < 0)
	{
		mult = -1;
	}

	return (mult * n);
}
