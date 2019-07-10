#include "holberton.h"

int _pow_recursion_helper(int, int, int);


/**
 * _pow_recursion - returns the power of a number x^y
 * @x: the first number
 * @y: the exponent
 *
 *
 *
 * Return: the power or -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (_pow_recursion_helper(x, y, x));
}


/**
 * _pow_recursion_helper - same thing, but with an accumulator
 * @x: a base
 * @y: an exponent
 * @acc: the accumulator
 *
 * Return: the power
 */
int _pow_recursion_helper(int x, int y, int acc)
{
	if (y == 1)
		return (acc);
	return (_pow_recursion_helper(x, y - 1, acc * x));
}
