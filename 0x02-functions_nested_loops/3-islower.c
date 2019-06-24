#include "holberton.h"

/**
 * _islower - Tells if a letter is lowercase or not.
 * @c: the character to test
 *
* Return: 1 if lowercase, 0 if not.
 */
int _islower(int c)
{
	return (c <= 'z' && c >= 'a');
}
