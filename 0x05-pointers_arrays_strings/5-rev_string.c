#include "holberton.h"


/**
 * rev_string - Prints the reverse of a string.
 * @s: The string.
 *
 *
 */
void rev_string(char *s)
{
	int len, i, counter, halfLen;
	char swap1, swap2;

	len = 0;
	while (s[len] != '\0')
	{
		len = len + 1;
	}

	halfLen = len / 2;
	if (len % 2)
		halfLen = halfLen + 1;

	counter = 0;
	for (i = len - 1; i >= halfLen; i--)
	{
		swap1 = s[i];
		swap2 = s[counter];

		s[counter] = swap1;
		s[i] = swap2;
		counter = counter + 1;
	}
}
