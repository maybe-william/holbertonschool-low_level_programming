#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * getinum - get the character at the index from the end of the string
 * @str: the string
 * @i: the reverse index
 * Return: the character there
 */
char getinum(char *str, int i)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
	{
	}
	len = len - 1;
	if (i > len || i < 0)
	{
		return ('\0');
	}
	return (str[len - i]);
}

/**
 * printnum - print the number backwards
 * @number: the number
 *
 *
 *
 */
void printnum(char *number)
{
	int len, nonzero;

	nonzero = 0;
	for (len = 0; number[len] != '\0'; len++)
	{
		if (getinum(number, len) != '0' || nonzero)
		{
			nonzero = 1;
			_putchar(getinum(number, len));
		}
	}
}

/**
 * addchars - add the ints represented by two chars
 * @a: the first num
 * @b: the second num
 *
 * Return: the result
 */
int addchars(char a, char b)
{
	int na, nb;

	na = a - '0';
	nb = b - '0';
	return (na + nb);
}

/**
 * addnum - add a two digit number to a sum at a position
 * @num1: the ones digit
 * @num2: the tens digit
 * @sum: the sum
 * @pos: the position
 */
void addnum(char num1, char num2, char *sum, int pos)
{
	int tmpsum, tmpsum2, carry1, carry2;

	if (num1 == '0' && num2 == '0')
	{
		return;
	}

	tmpsum = addchars(num1, sum[pos]);
	tmpsum2 = addchars(num2, sum[pos + 1]);
	carry1 = tmpsum / 10;
	tmpsum2 = tmpsum2 + carry1;
	carry2 = tmpsum2 / 10;
	sum[pos] = (tmpsum % 10) + '0';
	sum[pos + 1] = (tmpsum2 % 10) + '0';
	addnum(carry2 + '0', '0', sum, pos + 2);
}

/**
 * multdigs - multiply two digs represented by chars
 * @d1: the first digit
 * @d2: the second digit
 *
 * Return: the int product
 */
int multdigs(char d1, char d2)
{
	return ((d1 - '0') * (d2 - '0'));
}

/**
 * main - run the full program
 * @argc: the number of command line arguments
 * @argv: the command line arguments
 *
 * Return: 0 if all is well
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
	char *num1;
	char *num2;
	char *sum;
	int i, j, tmpnum, len1, len2, size;

	num1 = argv[1];
	num2 = argv[2];
	for (len1 = 0; num1[len1] != '\0'; len1++)
	{
	}
	for (len2 = 0; num2[len2] != '\0'; len2++)
	{
	}
	size = (len1 + len2);
	sum = malloc(size);
	for (i = 0; i < size; i++)
		sum[i] = '0';
	for (i = 0; i < len1; i++)
	{
		for (j = 0; j < len2; j++)
		{
			tmpnum = multdigs(getinum(num1, i), getinum(num2, j));
			addnum((tmpnum % 10) + '0', (tmpnum / 10) + '0', sum, i + j);
		}
	}
	printnum(sum);
	_putchar('\n');
	free(sum);
	return (0);
}
