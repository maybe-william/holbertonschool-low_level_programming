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
	long int i, j, match;

	x = s;
	y = accept;
	ret = 0;

	for (i = 0; x[i] != '\0'; i++)
	{
		match = 0;
		for (j = 0; y[j] != '\0'; j++)
		{
			if (x[i] == y[j])
			{
				ret = x + i;
				break;
			}
		}
		if (match)
			break;
	}
	if (ret == 0)
		return ((char *)i);
	return (ret);
}
