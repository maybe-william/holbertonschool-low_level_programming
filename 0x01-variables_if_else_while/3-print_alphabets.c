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
	char *s2;
	int i;

	s = "abcdefghijklmnopqrstuvwxyz";
	s2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	for (i = 1; i <= 26; i++)
	{
		putchar(s[i - 1]);
	}
	for (i = 1; i <= 26; i++)
	{
		putchar(s2[i - 1]);
	}
	putchar('\n');
	return (0);
}
