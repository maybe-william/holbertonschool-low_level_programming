#include "holberton.h"

/**
 * _strncpy - Copies two strings up to n bytes.
 * @dest: The destination
 * @src: The source
 * @n: The amount to copy characters.
 *
 * Return: The destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *write;
	char *s2;
	int count;

	count = 0;
	write = dest;
	s2 = src;

	for (; *s2 != '\0' && count != n; s2++)
	{
		*write = *s2;
		write = write + 1;
		count = count + 1;
	}
	for (; count < n; count++)
	{
		*write = '\0';
		write++;
	}
	return (dest);
}
