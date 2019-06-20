#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This function runs the program
 *
 * Return: The program exit status
 */
int main(void)
{
	char *s;
	int i;

	s = "abcdfghijklmnoprstuvwxyz";
	for (i = 1; i <= 26; i++)
	{
		putchar(s[i - 1]);
	}
	putchar('\n');
	return (0);
}
