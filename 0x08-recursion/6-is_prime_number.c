#include "holberton.h"

int prime_helper(int, int);


/**
 * is_prime_number - checks if a number is prime
 * @n: the number
 *
 *
 *
 *
 * Return: 1 if prime, otherwise 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_helper(n, n - 1));
}

/**
 * prime_helper - prime with a counter.
 * @n: the number
 * @f: the factor
 *
 * Return: 0 if f divides evenly ever, 1 if f = 1
 */
int prime_helper(int n, int f)
{

	if (f == 1)
		return (1);
	if (n % f == 0)
		return (0);
	return (prime_helper(n, f - 1));
}
