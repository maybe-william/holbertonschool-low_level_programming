#include "holberton.h"
#include <stdio.h>

/**
 * main - Prints all numbers from 1 to 100, or fizz, buzz or fizzbuzz.
 *
 * Return: Always returns 0.
 *
 */
int main(void)
{
	int i, d3, d5;

	for (i = 1; i <= 100; i++)
	{
		d3 = ((i % 3) == 0);
		d5 = ((i % 5) == 0);

		if (d3 && d5)
			printf("FizzBuzz");
		if (d3 && !d5)
			printf("Fizz");
		if (!d3 && d5)
			printf("Buzz");
		if (!d3 && !d5)
			printf("%i", i);

		if (i != 100)
		{
			printf(" ");
		}

	}
	printf("\n");
	return (0);
}
