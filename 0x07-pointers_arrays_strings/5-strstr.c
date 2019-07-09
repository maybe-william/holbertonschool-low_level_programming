#include "holberton.h"

/**
 * hasfullstring - checks if starting at the str, the other string is in
 * @str: the string
 * @sub: the sub
 *
 * Return: 1 or 0 if the sub is or isn't in the string
 */
int hasfullstring(char *str, char *sub)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (sub[i] == '\0')
			return (1);
		if (str[i] != sub[i])
			return (0);
	}
	if (sub[i] == '\0')
		return (1);
	return (0);
}






/**
 * _strstr - find the needle in the haystack
 * @haystack: the string to search
 * @needle: the substring to search
 *
 *
 * Return: null if not found, or the beginning of the substring.
 */
char *_strstr(char *haystack, char *needle)
{
	char *x;
	char *y;
	int i;


	x = haystack;
	y = needle;
	for (i = 0; x[i] != '\0'; i++)
	{
		if (x[i] == y[0])
		{
			if (hasfullstring)
			{
				return (x + i);
			}
		}
	}

	return (0);
}
