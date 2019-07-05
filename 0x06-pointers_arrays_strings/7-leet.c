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
	int i;

	s1 = s;
	char reg[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char lt[53] = "4bcd3fghijk1mn0pqrs7uvwxyz4BCD3FGHIJK1MN0PQRS7UVWXYZ";

	while (*s1 != '\0')
	{
		for (i = 0; reg[i] != '\0'; i++)
		{
			if (*s1 == reg[i])
			{
				*s1 = lt[i];
			}
		}
		s1 = s1 + 1;
	}
	return (s);
}
