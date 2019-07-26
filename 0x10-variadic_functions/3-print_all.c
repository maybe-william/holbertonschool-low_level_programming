#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - print all things based on a format string
 * @format: format string
 */
void print_all(const char * const format, ...)
{
	unsigned int i;
	char *temp;
	va_list vl;

	va_start(vl, format);
	i = 0;
	while (format[i] != '\0')
	{
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
			i++;
			continue;
		}
		if (format[i + 1] != '\0')
		{
			printf(", ");
		}
		i++;
	}
	va_end(vl);
	printf("\n");
}
