#include "variadic_functions.h"
#define fori(start, stop) for (i = (start); \
i != stop; \
((start < stop) ? (i++) : (i--)))

/**
 * sum_them_all - sum all ints variadically
 * @n: the number of ints to sum
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list vl;
	unsigned int i, sum;


	if (!n)
		return (n);
	sum = 0;
	va_start(vl, n);
	fori(0, n)
	{
		sum = sum + va_arg(vl, int);
	}
	va_end(vl);
	return (sum);
}
