#include "holberton.h"

/**
 * leet - Changes a string to 1337 notation.
 * @s: The string to 1337-ify.
 *
 *
 * Return: The pointer to the string.
 */
char *leet(char *s)
{
	char *s1;
	char reg[53];
	char lt[53];
	int i;

	s1 = s;
	reg = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	lt = "4bcd3fghijk1mn0pqrs7uvwxyz4BCD3FGHIJK1MN0PQRS7UVWXYZ";

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
