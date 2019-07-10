#include "holberton.h"


int getlen(char *, int);
int palindrome_helper(char *, int, int);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string
 *
 *
 *
 *
 * Return: 1 if palindrome, otherwise 0.
 */
int is_palindrome(char *s)
{
	int len;

	if (*s == '\0')
		return (0);
	len = getlen(s, 0);
	return (palindrome_helper(s, 0, len));
}

/**
 * getlen - get the length of a string
 * @s: the string s
 * @len: the accumulator for the length
 *
 *
 * Return: the length of a string
 */
int getlen(char *s, int len)
{
	if (*s == '\0')
		return (len);
	return (getlen(s + 1, len + 1));
}

/**
 * palindrome_helper - palindrome with accumulators.
 * @s: the string
 * @i: the current index
 * @len: the string length
 *
 * Return: 1 if palindrome, 0 otherwise.
 */
int palindrome_helper(char *s, int i, int len)
{
	if (*(s + i) != *(s + (len - 1 - i)))
		return (0);
	if (i == (len / 2))
		return (1);
	return (palindrome_helper(s, i + 1, len));
}
