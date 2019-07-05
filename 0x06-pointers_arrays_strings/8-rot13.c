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
	int i;

	s1 = s;
	char reg[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char lt[53] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*s1 != '\0')
	{
		for (i = 0; reg[i] != '\0'; i++)
		{
			if (*s1 == reg[i])
			{
				*s1 = lt[i];
				break;
			}
		}
		s1 = s1 + 1;
	}
	return (s);
}
