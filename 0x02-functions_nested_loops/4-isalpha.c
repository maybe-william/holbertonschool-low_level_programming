#include "holberton.h"

/**
 * _isalpha - Tells if a letter is alphabetical or not.
 * @c: the character to test
 *
* Return: 1 if alphabetical, 0 if not.
 */
int _isalpha(int c)
{
	return ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'));
}
