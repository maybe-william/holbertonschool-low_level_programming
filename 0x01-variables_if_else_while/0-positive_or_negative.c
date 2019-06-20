#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This function runs the program
 *
 * Return: The program exit status
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	char *s;

	if (n < 0)
	{
		s = "is negative";
	}

	if (n == 0)
	{
		s = "is zero";
	}

	if (n > 0)
	{
		s = "is positive";
	}

	printf("%i %s\n", n, s);
	return (0);
}
