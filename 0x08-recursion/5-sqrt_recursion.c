#include "holberton.h"

int mysqrt(int, int);


/**
 * _sqrt_recursion - returns the natural sqrt of a number n
 * @n: the first number
 *
 *
 *
 *
 * Return: the sqrt or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	return (mysqrt(n, 1));
}

/**
 * mysqrt - calculate square root with an accumulator
 * @n: the number
 * @f: the factor
 *
 * Return: -1 if a square isn't found, otherwise the root.
 */

int mysqrt(int n, int f)
{
	if ((n / f) == (n / (n / f)) && (n % f == 0))
		return (f);
	if (n <= f)
		return (-1);
	return (mysqrt(n, f + 1));
}
