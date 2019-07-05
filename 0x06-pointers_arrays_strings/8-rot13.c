#include "holberton.h"

/**
 * rot13 - Applies the ROT13 algorithm to a string
 * @s: The string to ROT13
 *
 *
 * Return: The pointer to the string.
 */
char *rot13(char *s)
{
	char *s1;
	char reg[53];
	char lt[53];
	int i;

	s1 = s;
	reg = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	lt = "nopqrstuvwxyzabcdefghijklmN0PQRSTUVWXYZABCDEFGHIJKLM";

	while (*s != NULL)
	{
		for (i = 0; reg[i] != NULL; i++)
		{
			if (*s == reg[i])
			{
				*s == lt[i];
			}
		}
		s = s + 1;
	}
	return (s);
}
