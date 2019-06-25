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
	long int sum;

	for (i = 0; i < 1024; i++)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
		{
			sum = sum + i;
		}
	}
	printf("%li\n", sum);
	return (0);
}
