#include "holberton.h"

/**
 * _isdigit - Checks if an int is a digit character.
 * @c: The int to check.
 *
 * Return: 1 if c is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
	int ret;

	ret = 0;
	if (c < 58 && c >= 48)
	{
		ret = 1;
	}
	return (ret);
}
