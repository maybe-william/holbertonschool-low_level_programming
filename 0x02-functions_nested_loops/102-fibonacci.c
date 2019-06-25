#include <stdio.h>
#include "holberton.h"

/**
 * main - Does stuff.
 *
 * Return: The exit status of the program.
 */
int main(void)
{
	int i;
	long int fib, prefib, temp;

	fib = 2;
	prefib = 1;

	for (i = 0; i < 50; i++)
	{
		if (i != 0)
			printf(", ");
		printf("%li", prefib);
		temp = fib + prefib;
		prefib = fib;
		fib = temp;
	}
	printf("\n");
	return (0);
}
