#include "3-calc.h"
#include <stdio.h>

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

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);
	temp = get_op_func((argv[2]));
	printf("%i\n", temp(arg1, arg2));

}
