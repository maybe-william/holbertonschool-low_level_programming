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
		if (!(str[i] >= (0 + '0') && str[i] <= (0 + '9')) && !(str[i] == '-'))
		{
			printf("Error\n");
			exit(1);
		}
		i++;
	}

	num = strtol(str, 0, 10);
	if (num <= 0)
	{
		printf("0\n");
		exit(0);
	}

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
	int sum, rest, coin;

	sum = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	rest = getnum(argv[1]);
	coin = 25;
	while (coin)
	{
		while (rest / coin)
		{
			sum = sum + (rest / coin);
			rest = rest % coin;
		}
		if (coin == 1)
			coin = 0;
		if (coin == 5)
			coin = 1;
		if (coin == 10)
			coin = 5;
		if (coin == 25)
			coin = 10;
	}


	printf("%i\n", sum);
	return (0);
}
