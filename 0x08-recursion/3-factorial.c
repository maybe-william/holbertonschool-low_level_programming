#include "holberton.h"

int factorial_helper(int, int);


/**
 * factorial - returns the factorial of a number
 * @n: the number to factorial
 *
 *
 *
 *
 * Return: the factorial or -1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	return (factorial_helper(n, 1));
}


/**
 * factorial_helper - same thing, but with an accumulator
 * @n: the number
 * @acc: the accumulator
 *
 * Return: the factorial of the number
 */
int factorial_helper(int n, int acc)
{
	if (n == 1 || n == 0)
		return (acc);
	return (factorial_helper(n - 1, acc * n));
}
