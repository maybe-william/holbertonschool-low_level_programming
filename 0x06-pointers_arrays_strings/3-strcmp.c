#include "holberton.h"

/**
 * _strcmp - Copies two strings up to n bytes.
 * @s1: The destination
 * @s2: The source
 *
 *
 * Return: -1, 0, or 1 if the string is lt, gt or equal to s2.
 */
int _strcmp(char *s1, char *s2)
{
	char *s11;
	char *s22;

	s11 = s1;
	s22 = s2;

	while(*s11 == *s22)
	{
		if (*s11 == '\0')
			break;
		if (*s22 == '\0')
			break;
		s11 = s11 + 1;
		s22 = s22 + 1;
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
