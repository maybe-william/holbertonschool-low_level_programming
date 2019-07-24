#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculator two nums.
 * @argc: the arg count
 * @argv: the args
 * Return: usually 0, 98 99 or 100 if error
 */
int main(int argc, char *argv[])
{
	int arg1, arg2;
	int (*temp)(int, int);

	if (argc != 4)
	{
		printf("Error");
		exit(98);
	}
	arg1 = argc;
	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);
	temp = get_op_func((argv[2]));
	if (!temp)
	{
		printf("Error");
		exit(99);
	}
	printf("%i\n", temp(arg1, arg2));
	return (0);
}
