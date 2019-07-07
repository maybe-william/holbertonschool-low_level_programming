#include "holberton.h"

/**
 * get_digit - Get the digit from the character.
 * @c: The character
 *
 * Return: The digit or 0 if not a valid digit.
 */
int get_digit(char c)
{
	if (c <= '9' && c >= '0')
		return (c - '0');
	else
		return (0);
}

/**
 * revbuf - Reverse a buffer
 * @b: The buffer
 * @blen: The length of the buffer
 *
 * Return: The reversed buffer
 */
char *revbuf(char *b, int blen)
{
	int i;
	char temp;

	for (i = 0; i < ((blen - 1) / 2); i++)
	{
		temp = b[i];
		b[i] = b[blen - i - 1];
		b[blen - i - 1] = temp;
	}
	return (b);
}


/**
 * cuttail - Cut excess zeros off of the "front" of a buffer
 * @b: The buffer
 * @blen: The length of the buffer
 *
 * Return: The buffer
 */
char *cuttail(char *b, int blen)
{
	int i;

	for (i = blen; b[i - 1] == '0'; i--)
	{
		if (i == 0)
		{
			b[0] = '0';
			b[1] = '\0';
			return (b);
		}
	}
	b[i] = '\0';
	return (b);
}

/**
 * revadd - Add two number strings in reverse order
 * @a: First operand
 * @b: Second operand
 * @r: Return buffer
 * @rlen: The length of the return buffer
 *
 * Return: The return buffer
 */
char *revadd(char *a, char *b, char *r, int rlen)
{
	int i, j, k, add1, add2, sum, carry;

	i = 0;
	j = 0;
	while (a[i] != 0)
		i++;
	while (b[j] != 0)
		j++;
	k = 0;
	carry = 0;
	i--;
	j--;
	while (i != -1 || j != -1)
	{
		add1 = get_digit(a[i]);
		add2 = get_digit(b[j]);
		sum = add1 + add2 + carry;
		r[k] = (sum % 10) + '0';
		carry = sum / 10;
		if (i != -1)
			i--;
		if (j != -1)
			j--;
		k++;
	}
	if (carry)
	{
		r[k] = carry + '0';
		k++;
	}
	cuttail(r, k);
	k = 0;
	while (r[k] != '\0')
	{
		k++;
	}
	if (k >= rlen)
		return (0);
	return (r);
}
/**
 * infinite_add - This function adds two string numbers into a string.
 * @n1: The first number
 * @n2: The second number
 * @r: The result buffer
 * @size_r: The length of the result buffer.
 *
 * Return: The pointer r or 0 if r is too small.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int k;
	char *flow;

	k = size_r;

	flow = revadd(n1, n2, r, k);
	if (!flow)
		return (0);

	k = 0;
	while (r[k] != '\0')
		k++;
	revbuf(r, k);

	return (r);
}
