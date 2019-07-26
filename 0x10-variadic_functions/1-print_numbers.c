#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#define fori(start, end) for (i = (start); \
i != (end); \
(((start) < (end)) ? (i++) : (i--)))

/**
 * print_numbers - print all numbers with a string inbetween
 * @separator: string
 * @n: amount of params
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list vl;

	if (!n)
	{
		printf("\n");
		return;
	}

	va_start(vl, n);

	fori(0, n)
	{
		if (i && (separator))
			printf("%s", separator);
		printf("%i", va_arg(vl, int));
	}

	va_end(vl);
	printf("\n");
}
