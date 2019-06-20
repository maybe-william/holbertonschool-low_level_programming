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
	int s[10];
	int i;
	int j;
	int temp;

	temp = 48;
	for (i = 1; i <= 10; i++)
	{
		s[i - 1] = temp;
		temp++;
	}
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 10; j++)
		{
			putchar(s[i - 1]);
			putchar(s[j - 1]);
			if (i != 10 || j != 10)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
