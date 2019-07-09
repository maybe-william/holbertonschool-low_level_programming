#include "holberton.h"


/**
 * _strpbrk - get the characters starting with one of a set of characters
 * @s: the string to search
 * @accept: the accepted prefix characters
 *
 *
 * Return: the number of accepted bytes in the string
 */
char *_strpbrk(char *s, char *accept)
{
	char *x;
	char *y;
	char *ret;
	long int i, j, hasnull;

	x = s;
	y = accept;
	ret = 0;
	hasnull = 0;

	for (i = 0; x[i] != '\0'; i++)
	{
		for (j = 0; y[j] != '\0'; j++)
		{
			if (y[j] == '\0')
				hasnull = 1;
			if (x[i] == y[j])
			{
				ret = x + i;
				return (ret);
			}
		}
	}
	if (hasnull)
		return (x + i);
	return (ret);
}
