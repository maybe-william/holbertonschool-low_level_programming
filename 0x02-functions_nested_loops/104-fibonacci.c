#include <stdio.h>
#include "holberton.h"

/**
 * main - Does stuff.
 *
 * Return: The exit status of the program.
 */
int main(void)
{
	unsigned long int i, h1, h2, hs, t1, t2, ts, o1, o2, os;

	h1 = h2 = hs = t1 = ts = t2 = os = 0;
	o1 = 1;
	o2 = 2;
	for (i = 0; i < 98; i++)
	{
		if (i != 0)
			printf(", ");
		if (h1)
			printf("%lu%07lu%07lu", h1, t1, o1);
		else if (t1)
			printf("%lu%07lu", t1, o1);
		else
			printf("%lu", o1);
		hs = h1 + h2;
		ts = t1 + t2;
		hs = hs + ((ts / 10000000) % 10000000);
		ts = ts % 10000000;
		os = o1 + o2;
		ts = ts + ((os / 10000000) % 10000000);
		hs = hs + ((ts / 10000000) % 10000000);
		hs = hs % 10000000;
		ts = ts % 10000000;
		os = os % 10000000;
		o1 = o2;
		t1 = t2;
		h1 = h2;
		o2 = os;
		t2 = ts;
		h2 = hs;
	}
	printf("\n");
	return (0);
}
