#include <stdio.h>

/**
 * main - runs the program
 * @argc: the count of args
 * @argv: the list of args
 *
 * Return: always 0
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%i\n", argc - 1);
	return (0);
}
