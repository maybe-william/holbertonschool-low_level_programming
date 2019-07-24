#include <stdio.h>
#include <stdlib.h>

void hack(int);

/**
 * main - does fun stuff
 * @argc: the arg count
 * @argv: the args
 * Return: returns 0 or something
 */
int main(int argc, char *argv[])
{
	int num;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("Error\n");
		exit(2);
	}
	hack(num);
	return (0);
}

/**
 * hack - hax
 * @bytes: the number of bytes to print of main
 */
void hack(int bytes)
{

	unsigned char *x;
	int i;

	x = (unsigned char *)(&main);

	for (i = 0; i < bytes; i++)
	{
		if (i > 0)
			printf(" ");
		printf("%02x", x[i]);
	}
	printf("\n");
}
