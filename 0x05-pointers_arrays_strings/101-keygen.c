#include <stdio.h>
#include <stdlib.h>
#include <time.h>



/**
 * main - Calculates a valid password.
 *
 * Return: Always 0.
 */
int main(void)
{


	int diff;
	char *s, one, two;

	s = "aaaaaaaaaaaaaaaaaaaaaaaaaab";
	srand(time(0));
	diff = rand() % 13;
	one = 'L' - diff;
	two = 'L' + diff;
	printf("%s%c%c", s, one, two);
	return (0);
}
