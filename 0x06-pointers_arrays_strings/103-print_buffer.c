#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * getprintchar - Return the char or a . if non-printable.
 * @c: The char
 *
 * Return: The char or .
 *
 */
char getprintchar(char c)
{
	unsigned char c1;

	c1 = (unsigned char)c;
	if (c1 <= 127 && c1 >= 32)
		return (c);
	return ('.');
}

/**
 * printaddr - Prints the address of a buffer.
 * @b: The buffer address
 *
 *
 *
 */
void printaddr(char *b)
{
	unsigned int i;

	i = *((unsigned int *)&b);
	printf("%08x: ", i);
}

/**
 * printbyte - Prints the byte value at the address
 * @b: The buffer address
 *
 *
 *
 */
void printbyte(char *b)
{
	printf("%02x", *b);
}

/**
 * printchar - Prints a character at a buffer
 * @b: The buffer address
 *
 *
 *
 */
void printchar(char *b)
{
	char c;

	c = getprintchar(*b);
	printf("%c", c);
}

/**
 * print_buffer - Prints n characters starting from an address
 * @b: The buffer address
 * @size: The amount to print
 *
 *
 */
void print_buffer(char *b, int size)
{
	int i, extra, left, toprint;
	char *tmpb;

	left = size;
	tmpb = b;
	extra = size % 10;
	toprint = 10;
	if (size <= 0)
	{
		printf("\n");
	}

	while (left > 0)
	{
		if (left < 10)
		{
			toprint = extra;
		}
		printaddr(tmpb);
		for (i = 0; i < 10; i++)
		{
			if (i < toprint)
				printbyte(tmpb + i);
			else
				printf("  ");
			if (i % 2)
				printf(" ");
		}
		for (i = 0; i < 10; i++)
		{
			if (i < toprint)
				printchar(tmpb + i);
		}
		printf("\n");
		tmpb = tmpb + 10;
		left = left - 10;
	}
}
