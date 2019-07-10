#include "holberton.h"



int starbranch(char *, char *);



/**
 * strcmp - compare two strings one character at a time
 * @str1: the first string
 * @str2: the starrable string
 *
 * Return: 1 if they are "equal", 0 otherwise.
 */
int strcmp(char *str1, char *str2)
{

	if (*str2 == '*')
	{
		return (starbranch(str1, str2 + 1));
	}
	if (*str1 == '\0' || *str2 == '\0')
	{
		if (*str2 == '\0' && *str1 == '\0')
			return (1);
		return (0);
	}
	if (*str1 == *str2)
	{
		return (strcmp(str1 + 1, str2 + 1));
	}
	return (0);
}

/**
 * starbranch - branch horizontally if a star has been encountered.
 * @s1: the regular string
 * @star: the starred string
 *
 * Return: 1 if the string matches, stars and all, else 0
 */
int starbranch(char *s1, char *star)
{
	if (*s1 == '\0')
		return (strcmp(s1, star));
	return (strcmp(s1, star) || starbranch(s1 + 1, star));
}


/**
 * wildcmp - compares a string to a wildcard string
 * @s: the string
 * @s2: the wildcard string
 *
 *
 *
 * Return: 1 if it matches, otherwise 0.
 */
int wildcmp(char *s, char *s2)
{
	return (strcmp(s, s2));
}
