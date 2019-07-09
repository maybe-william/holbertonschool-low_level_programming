#include "holberton.h"


/**
 * _strspn - find the length of the prefix with accepted bytes
 * @s: the string to search
 * @accept: the accepted prefix characters
 *
 *
 * Return: the number of accepted bytes in the string
 */
char *_strspn(char *s, char *accept)
{
	char *x;
	char *y;
	int i, j, match;

	x = s;
	y = accept;

	for (i = 0; x[i] != '\0'; i++)
	{
		match = 0;
		for (j = 0; y[j] != '\0'; j++)
		{
			if (x[i] == y[j])
			{
				match = 1;
				break;
			}
		}
		if (!match)
			break;
	}
	return (i);
}
