#include "holberton.h"

int _strlen_helper(char *, int);


/**
 * _strlen_recursion - puts in reverse using recursion
 * @s: the string to put.
 *
 *
 *
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	return (_strlen_helper(s, 0));
}


/**
 * _strlen_helper - same thing, but with an accumulator
 * @s: the string
 * @acc: the accumulator
 *
 * Return: the length of the string
 */
int _strlen_helper(char *s, int acc)
{
	if (*s == '\0')
		return (acc);
	return (_strlen_helper(s + 1, acc + 1));
}
