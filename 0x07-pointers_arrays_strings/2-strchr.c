#include "holberton.h"


/**
 * _strchr - find the first occurence of a char in a string
 * @s: the string to search
 * @c: the character to look for
 *
 *
 * Return: a pointer to the first occurence or NULL
 */
char *_strchr(char *s, char c)
{
	char *x;
	char *res;
	int i;

	x = s;
	res = 0;

	for (i = 0; x[i] != '\0'; i++)
		if (x[i] == c)
		{
			res = (x + i);
			break;
		}

	if (c == '\0')
		res = (x + i);
	return (res);
}
