#include "holberton.h"
#include <stdio.h>
#include <math.h>





/**
 * prime - Finds the largest prime factor of a number.
 * @num: the number to factor
 * Return: The largest prime factor.
 *
 */
long int prime(long int num)
{
	long int largest, sq, i, tempa, tempb;

	largest = 0;
	sq = (long int)sqrt(num);
	for (i = 2; i <= sq; i++)
	{
		if (num % i == 0)
		{
			tempa = prime(i);
			tempb = prime(num / i);
			if (tempa > largest)
				largest = tempa;
			if (tempb > largest)
				largest = tempb;
		}
	}
	if (largest)
		return (largest);
	else
		return (num);

}







/**
 * main - Finds the largest prime factor of a number.
 *
 * Return: Always returns 0.
 *
 */
int main(void)
{
	long int num;

	num = 612852475143;
	printf("%li\n", prime(num));
	return (0);
}
