#include "holberton.h"
#include <stdlib.h>

/**
 * getstrnum - get the number of char * to have
 * @arr: the start string
 *
 *
 *
 * Return: the number of char * (needs one more) needed
 */
int getstrnum(char *arr)
{
	char prev;
	int count, i, extra;

	i = 0;
	count = 0;
	extra = 1;
	prev = ' ';
	while (arr[i] != '\0')
	{
		if (arr[i] == ' ' && prev != ' ')
			count = count + 1;
		prev = arr[i];
		i = i + 1;
	}
	if (i != 0 && prev == ' ')
		extra = 0;

	return (count + extra);
}

/**
 * getlennext - return the len from current to next
 * @arr: the current pointer
 *
 *
 *
 * Return: 0 if on a string/null char, len otherwise
 */
int getlennext(char *arr)
{
	int i;

	i = 0;
	while (arr[i] != '\0' && arr[i] != ' ')
	{
		i++;
	}

	return (i);
}

/**
 * skipspace - skip over the spaces in a string
 * @ptr: the pointer to skip over spaces in
 *
 *
 * Return: the new pointer
 */
char *skipspace(char *ptr)
{
	char *myptr;

	myptr = ptr;
	while (*myptr == ' ')
	{
		myptr = myptr + 1;
	}
	return (myptr);
}

/**
 * strtow - split a string by spaces.
 * @str: the string to split
 *
 *
 * Return: the array of words
 */
char **strtow(char *str)
{
	char **ret;
	char *current;
	char *strptr;
	char *tmpptr;
	int wordnum, lettnum, i, j;

	if (str == NULL || (str[0] == '\0'))
		return (NULL);
	tmpptr = skipspace(str);
	if (*tmpptr == '\0' || (tmpptr[0] == ' ' && tmpptr[1] == '\0'))
		return (NULL);
	strptr = str;
	wordnum = getstrnum(str);
	ret = (char **)malloc((wordnum + 1) * sizeof(char *));
	if (ret == NULL)
		return (NULL);
	for (i = 0; i < wordnum; i++)
	{
		strptr = skipspace(strptr);
		lettnum = getlennext(strptr);
		current = (char *)malloc((lettnum + 1) * sizeof(char));
		if (current == NULL)
			return (NULL);
		for (j = 0; j < lettnum; j++)
		{
			current[j] = strptr[j];
		}
		current[j] = '\0';
		ret[i] = current;
		strptr = strptr + lettnum;
	}

	ret[i] = NULL;
	return (ret);
}

