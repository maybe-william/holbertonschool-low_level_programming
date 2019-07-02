#include "holberton.h"

/**
 * _get_first_digit - Gets the first integer in the string.
 * @s: The string with the integer in it.
 *
 * Return: The first digit position. Also + or -.
 */
int _get_first_digit(char *s)
{
	int i;
	int signs;

	signs = 0;
	i = 0;
	while (s[i] < '0' || s[i] > '9')
	{
		if (s[i] == '\0')
			return (0);
		if (s[i] == '-')
			signs = signs - 1;
		if (s[i] == '+')
			signs = signs + 1;

		i = i + 1;
	}

	if (signs < 0)
		i = i * -1;

	return (i);
}

/**
 * _extract_num - Gets the first integer in the string.
 * @s: The string with the integer in it. Starts at first digit.
 *
 * Return: The integer in the string unsigned.
 */
unsigned int _extract_num(char *s)
{
	int i;
	unsigned int ans;

	ans = 0;
	i = 0;
	while (s[i] >= '0' && s[i] <= '9')
	{
		ans = ans * 10;
		ans = ans + (s[i] - '0');
		i++;
	}
	return (ans);
}

/**
 * _convert - Takes the unsigned number and converts it.
 * @u: The actual number.
 * @sign: A positive or negative number.
 *
 * Return: The integer in signed form.
 */
int _convert(unsigned int u, int sign)
{
	unsigned int temp;
	int temp2, zero;

	zero = !u;
	if (zero)
		return ((signed int)u);

	temp = u - 1;
	temp2 = (signed int)temp;

	if (sign < 0)
	{
		temp2 = temp2 * -1;
		temp2 = temp2 - 1;
	} else
	{
		temp2 = temp2 + 1;
	}
	return (temp2);
}

/**
 * _atoi - Gets the first integer in the string.
 * @s: The string with the integer in it.
 *
 * Return: The integer in the string.
 */
int _atoi(char *s)
{
	int start, sign;
	unsigned int interm;
	int ans;

	sign = 1;
	start = _get_first_digit(s);

	if (start == 0)
		if (s[0] < '0' || s[0] > '9')
			return (0);

	if (start < 0)
	{
		start = start * -1;
		sign = -1;
	}

	interm = _extract_num(s + start);

	ans = _convert(interm, sign);

	return (ans);
}
