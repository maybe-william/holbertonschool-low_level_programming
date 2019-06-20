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
	int i, j, k, temp;
	int done[10][10][10];

	temp = 48;
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 10; j++)
			for (k = 1; k <= 10; k++)
				done[i - 1][j - 1][k - 1] = 0;
		s[i - 1] = temp++;
	}
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 10; j++)
		{
			for (k = 1; k <= 10; k++)
			{
				if (!(i == j || k == j || i == k || done[i - 1][j - 1][k - 1]))
				{
					putchar(s[i - 1]);
					putchar(s[j - 1]);
					putchar(s[k - 1]);
					done[i - 1][j - 1][k - 1] = 1;
					done[j - 1][i - 1][k - 1] = 1;
					done[k - 1][i - 1][j - 1] = 1;
					done[k - 1][j - 1][i - 1] = 1;
					done[j - 1][k - 1][i - 1] = 1;
					done[i - 1][k - 1][j - 1] = 1;
					if (i != 8 || j != 9 || k != 10)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
