#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - create a malloc'd copy of a string
 * @str: the string
 *
 *
 *
 *
 *
 *
 * Return: a pointer to the string dup
 */
char *_strdup(char *str)
{
	char *ret;
	int i, size;

	if (*str == '\0')
	{
		return (0);
	}

	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}

	ret = (char *)malloc((size + 1) * sizeof(*str));
	if (!ret)
		return (ret);

	for (i = 0; i < size; i++)
	{
		ret[i] = str[i];
	}
	ret[i] = '\0';
	return (ret);
}
