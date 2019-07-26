#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#define fori(start, end) for (i = (start); \
i != (end); \
(((start) < (end)) ? (i++) : (i--)))

/**
 * print_strings - print all strings with a string inbetween
 * @separator: string
 * @n: amount of params
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *temp;
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
		temp = va_arg(vl, char *);
		if (temp)
			printf("%s", temp);
		else
			printf("(nil)");
	}

	va_end(vl);
	printf("\n");
}
