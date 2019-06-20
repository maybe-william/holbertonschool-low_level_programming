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
	int done[10][10];

	temp = 48;
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 10; j++)
		{
			done[i - 1][j - 1] = 0;
		}

		s[i - 1] = temp;
		temp++;
	}
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 10; j++)
		{
			if (!(i == j || done[i - 1][j - 1]))
			{
				putchar(s[i - 1]);
				putchar(s[j - 1]);

				done[i - 1][j - 1] = 1;
				done[j - 1][i - 1] = 1;

				if (i != 9 || j != 10)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
