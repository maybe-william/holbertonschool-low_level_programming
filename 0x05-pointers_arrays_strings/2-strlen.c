#include "holberton.h"


/**
 * _strlen - Finds the length of a string.
 * @s: The string.
 *
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len = len + 1;
	}
	return (len);
}
