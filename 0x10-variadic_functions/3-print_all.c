#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - print all things based on a format string
 * @format: format string
 */
void print_all(const char * const format, ...)
{
	unsigned int regchar, i = 0;
	char *temp;
	va_list vl;

	va_start(vl, format);
	regchar = 1;
	while (format[i] != '\0')
	{
		if (i != 0 && !regchar)
			printf(", ");
		switch (format[i])
		{
		case 's':
			temp = va_arg(vl, char *);
			if (temp)
			{
				printf("%s", temp);
				break;
			}
			printf("(nil)");
			break;
		case 'c':
			printf("%c", va_arg(vl, int));
			break;
		case 'i':
			printf("%i", va_arg(vl, int));
			break;
		case 'f':
			printf("%f", va_arg(vl, double));
			break;
		default:
			regchar = 1;
			i++;
			continue;
		}
		regchar = 0;
		i++;
	}
	va_end(vl);
	printf("\n");
}
