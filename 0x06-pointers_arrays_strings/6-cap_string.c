#include "holberton.h"

/**
 * cap_string - Changes a string to uppercase words.
 * @s: The string to upcase words
 *
 *
 * Return: The pointer to the string.
 */
char *cap_string(char *s)
{
	int i;
	int sep;
	char tmp;
	int p1, p2, p3, p4;

	sep = 1;

	for (i = 0; s[i] != NULL; i++)
	{
		if (sep)
		{
			if (s[i] <= 'z' && s[i] >= 'a')
			{
				s[i] = s[i] - 32;
			}
		}
		sep = 0;
		tmp = s[i];

		p1 = (tmp == ',' || tmp == ';' || tmp == '.');
		p2 = (tmp == '?' || tmp == '"' || tmp == '(');
		p3 = (tmp == '!' || tmp == ')' || tmp == '{');
		p4 = p1 || p2 || p3 || tmp == '}';
		if (p4)
		{
			sep = 1;
		}
	}
	return (s);
}
