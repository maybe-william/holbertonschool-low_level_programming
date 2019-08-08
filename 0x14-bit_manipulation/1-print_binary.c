#include "holberton.h"
#include <stdio.h>


/**
 * print_bin_rec - print a binary number recursively
 * @n: the number to print
 *
 */
void print_bin_rec(unsigned long int n)
{
	if (!n)
		return;

	print_bin_rec(n >> 1);

	if ((n >> 1))
		putchar(((n >> 1) & 1) + '0');


}
/**
 * print_binary - function description
 * @n: parameter description
 */
void print_binary(unsigned long int n)
{
	print_bin_rec(n);
	putchar((n & 1) + '0');
}
