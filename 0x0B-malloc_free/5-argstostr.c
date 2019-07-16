#include "holberton.h"
#include <stdlib.h>

/**
 * totallength - gets the total length including newlines
 * @ac: the argcount
 * @av: the args
 *
 * Return: the total length
 */
int totallength(int ac, char **av)
{
	int size, i, j;

	size = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			size = size + 1;
		}
		size = size + 1;
	}
	return (size);
}


/**
 * argstostr - concat all program args
 * @ac: the number of arguments
 * @av: the arguments
 *
 *
 *
 *
 *
 * Return: a pointer to the concat args
 */
char *argstostr(int ac, char **av)
{
	int i, j, size, k;
	char *ret;

	if (ac == 0 || av == 0)
		return (0);

	size = totallength(ac, av);
	ret = (char *)malloc(size * sizeof(char));
	if (ret == 0)
		return (0);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ret[k] = av[i][j];
			k = k + 1;
		}
		ret[k] = '\n';
		k = k + 1;
	}
	return (ret);
}
