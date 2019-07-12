#include <stdio.h>
#include <stdlib.h>

/**
 * main - runs the program
 * @argc: the count of args
 * @argv: the list of args
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = strtol(argv[1], 0, 10);
	j = strtol(argv[2], 0, 10);

	printf("%i\n", i * j);
	return (0);
}
