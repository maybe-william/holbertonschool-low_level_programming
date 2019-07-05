#include "holberton.h"

/**
 * string_toupper - Changes a string to uppercase.
 * @s: The string to upcase
 *
 *
 * Return: The pointer to the string.
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] <= 'z' && s[i] >= 'a')
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
