#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - create a malloc'd concat
 * @s1: the first string
 * @s2: the second string
 *
 *
 *
 *
 *
 * Return: a pointer to the string concat
 */
char *str_concat(char *s1, char *s2)
{
	char *ret;
	int i, size1, size2;

	size1 = 0;
	if (s1)
	{
		while (s1[size1] != '\0')
		{
			size1++;
		}
	}

	size2 = 0;
	if (s2)
	{
		while (s2[size2] != '\0')
		{
			size2++;
		}
	}
	ret = (char *)malloc((size1 + size2 + 1) * sizeof(char));
	if (ret == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		ret[i] = s1[i];
	for (i = size1; i < (size1 + size2); i++)
		ret[i] = s2[i];
	ret[i] = '\0';
	return (ret);
}
