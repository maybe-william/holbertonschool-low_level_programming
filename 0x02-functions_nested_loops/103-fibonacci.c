#include <stdio.h>
#include "holberton.h"

/**
 * main - Does stuff.
 *
 * Return: The exit status of the program.
 */
int main(void)
{
	long int fib, prefib, temp, sum;

	fib = 2;
	prefib = 1;
	sum = 0;

	while (prefib < 4000000)
	{

		if ((prefib % 2) == 0)
		{
			sum = sum + prefib;
		}
		temp = fib + prefib;
		prefib = fib;
		fib = temp;
	}
	printf("%li\n", sum);
	return (0);
}
