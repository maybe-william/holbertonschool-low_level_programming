#include "holberton.h"

/**
 * _strcat - Concats two strings
 * @dest: The destination
 * @src: The source
 *
 * Return: The destination string
 */
char *_strcat(char *dest, char *src)
{
	char *write;
	char *s2;

	write = dest;
	s2 = src;
	for (; *write != NULL; write++)
	{
	}
	for (; *s2 != NULL; s2++)
	{
		*write = *s2;
		write = write + 1;
	}
	*write = '\0';
	return (dest);
}
