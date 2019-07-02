#include "holberton.h"


/**
 * _strcpy - Puts the last half of a string.
 * @d: The first string.
 * @s: The second string.
 *
 * Return: The destination string pointer.
 */
char *_strcpy(char *d, char *s)
{
	int len, i;

	len = 0;
	while (s[len] != '\0')
	{
		len = len + 1;
	}

	for (i = 0; i < len; i++)
	{
		d[i] = s[i];
	}
	d[i] = '\0';

	return (d);
}
