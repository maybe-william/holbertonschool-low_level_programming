#include <stdio.h>
#include <stdlib.h>

/**
 * getnum - gets the number or exits(1) if not a number.
 * @str: the number to convert
 *
 *
 * Return: the number, or exit -1.
 */
int getnum(char *str)
{
	int num, i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= (0 + '0') && str[i] <= (0 + '9')))
		{
			printf("Error\n");
			exit(1);
		}
		i++;
	}

	num = strtol(str, 0, 10);

	return (num);
}


/**
 * main - runs the program
 * @argc: the count of args
 * @argv: the list of args
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i, sum;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	sum = 0;
	for (i = 1; i < argc; i++)
	{
		sum = sum + getnum(argv[i]);
	}
	printf("%i\n", sum);
	return (0);
}
