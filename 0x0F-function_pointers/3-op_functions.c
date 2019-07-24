#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - add two parameters
 * @a: the first
 * @b: the second
 * Return: the result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - sub two parameters
 * @a: the first
 * @b: the second
 * Return: the result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - mul two parameters
 * @a: the first
 * @b: the second
 * Return: the result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - div two parameters
 * @a: the first
 * @b: the second
 * Return: the result
 */
int op_div(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - mod two parameters
 * @a: the first
 * @b: the second
 * Return: the result
 */
int op_mod(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
