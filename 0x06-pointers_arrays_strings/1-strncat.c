#include "holberton.h"

/**
 * _strncat - Concats two strings up to n bytes.
 * @dest: The destination
 * @src: The source
 * @n: The amount to take characters.
 *
 * Return: The destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *write;
	char *s2;
	int count;

	count = 0;

	write = dest;
	s2 = src;
	for (; *write != NULL; write++)
	{
	}
	for (; *s2 != NULL && count != n; s2++)
	{
		*write = *s2;
		write = write + 1;
		count = count + 1;
	}
	for (; count < n; count++)
	{
		*write = '\0';
	}
	return (dest);
}
