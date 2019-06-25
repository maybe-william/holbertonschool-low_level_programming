#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - Print all natural numbers from n to 98.
 * @n: The number to count towards 98.
 *
 */
void print_to_98(int n)
{
	int i;
	int count_dir;

	count_dir = 1;
	if (n > 98)
	{
		count_dir = -1;
	}

	for (i = n; i != 98; i = i + count_dir)
	{
		printf("%i, ", i);
	}
	printf("98\n");

}
