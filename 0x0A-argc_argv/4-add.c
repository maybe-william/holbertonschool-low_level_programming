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
	int num, i, onenum, digit, minus, twominus;

	i = 0;
	onenum = 0;
	minus = 0;
	twominus = 0;
	digit = 0;
	while (str[i] != '\0')
	{
		digit = str[i] >= (0 + '0') && str[i] <= (0 + '9');
		twominus = minus && str[i] == '-';
		minus = str[i] == '-';
		if (!digit && !minus)
		{
			printf("Error\n");
			exit(1);
		}
		if (digit)
			onenum = 1;
		i++;
	}
	if (!onenum || twominus)
	{
		printf("Error\n");
		exit(1);
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
		printf("%i\n", 0);
		return (0);
	}
	sum = 0;
	for (i = 1; i < argc; i++)
	{
		sum = sum + getnum(argv[i]);
	}
	printf("%i\n", sum);
	return (0);
}
