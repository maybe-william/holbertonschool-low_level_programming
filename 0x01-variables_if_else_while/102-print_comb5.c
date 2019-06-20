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
	int i, ileft, iright, j, jleft, jright, temp;
	int done[100][100];

	temp = 48;
	for (i = 1; i <= 100; i++)
	{
		for (j = 1; j <= 100; j++)
			done[i - 1][j - 1] = 0;
		if (i <= 10)
			s[i - 1] = temp++;
	}
	for (i = 1; i <= 100; i++)
	{
		for (j = 1; j <= 100; j++)
		{
			if (!(i == j || done[i - 1][j - 1]))
			{
				ileft = (((i - 1) / 10) % 10);
				iright = ((i - 1) % 10);
				jleft = (((j - 1) / 10) % 10);
				jright = ((j - 1) % 10);
				putchar(s[ileft]);
				putchar(s[iright]);
				putchar(32);
				putchar(s[jleft]);
				putchar(s[jright]);
				done[i - 1][j - 1] = 1;
				done[j - 1][i - 1] = 1;
				if (i != 99 || j != 100)
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
