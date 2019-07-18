#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - concat two strings, n bytes on second
 * @s1: the first concat
 * @s2: the n bytes to concat
 * @n: the amount of bytes
 * Return: the pointer to malloc'd concat
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ret;
	char *s11;
	char *s22;
	unsigned int size1, size2, i, j;

	s11 = s1;
	s22 = s2;

	if (!s1)
		s11 = "";
	if (!s2)
		s22 = "";

	for (size1 = 0; s11[size1] != '\0'; size1++)
	{
	}
	for (size2 = 0; s22[size2] != '\0'; size2++)
	{
	}

	if (n < size2)
		size2 = n;

	ret = malloc((size1 + size2 + 1) * sizeof(char));
	if (!ret)
		return (NULL);

	for (i = 0; i < size1; i++)
	{
		ret[i] = s11[i];
	}
	for (j = 0; j < size2; j++)
	{
		ret[i + j] = s22[j];
	}
	ret[i + j] = '\0';

	return (ret);
}
