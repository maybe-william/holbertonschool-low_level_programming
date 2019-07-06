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
	int i, j;

	s1 = s;
	char *reg = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *lt = "4bcd3fghijk1mn0pqrs7uvwxyz4BCD3FGHIJK1MN0PQRS7UVWXYZ";

	for (j = 0; s1[j] != '\0'; j++)
	{
		for (i = 0; reg[i] != '\0'; i++)
		{
			if (s1[j] == reg[i])
			{
				s1[j] = lt[i];
			}
		}
	}
	return (s);
}
