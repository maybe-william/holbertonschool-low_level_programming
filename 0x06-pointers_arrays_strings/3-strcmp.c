#include "holberton.h"

/**
 * _strcmp - Copies two strings up to n bytes.
 * @s1: The destination
 * @s2: The source
 *
 *
 * Return: -1, 0, or 1 if the string is lt, gt or equal to s2.
 */
char *_strcmp(char *s1, char *s2)
{
	char *s11;
	char *s22;

	s11 = s1;
	s22 = s2;

	while(*s11 == *s22 && *s11 != NULL && *s22 != NULL)
	{
	}

	if (*s11 < *s22)
	{
		return (-1);
	}
	if (*s11 > *s22)
	{
		return (1);
	}

	return (0);
}
