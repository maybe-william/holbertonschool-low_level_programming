#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: the name to print
 * @f: the function to print it
 */
void print_name(char *name, void (*f)(char *))
{
	if (name)
		f(name);
	else
		f("");
}
