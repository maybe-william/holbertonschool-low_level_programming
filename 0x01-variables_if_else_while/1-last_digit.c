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
	char *s;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	x = n % 10;

	if (x < 6 && x != 0)
	{
		s = "and is less than 6 and not 0";
	}

	if (x == 0)
	{
		s = "and is 0";
	}

	if (x > 5)
	{
		s = "and is greater than 5";
	}


	printf("Last digit of %i is %i %s\n", n, x, s);
	return (0);
}
