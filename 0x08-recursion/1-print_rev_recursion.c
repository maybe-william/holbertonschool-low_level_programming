#include "holberton.h"




/**
 * _print_rev_recursion - puts in reverse using recursion
 * @s: the string to put.
 *
 *
 *
 *
 *
 */
void _print_rev_recursion(char *s)
{
	if (!(*s))
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
