#include <stdio.h>

/**
 * main - runs the program
 * @argc: the count of args
 * @argv: the list of args
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
