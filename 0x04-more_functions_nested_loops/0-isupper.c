#include "holberton.h"

/**
 * _isupper - Checks if an int is and uppercase letter.
 * @c: The int to check.
 *
 * Return: 1 if c is upcase, 0 otherwise.
 */
int _isupper(int c)
{
	int ret;

	ret = 0;
	if (c < 91 && c >= 65)
	{
		ret = 1;
	}
	return (ret);
}
