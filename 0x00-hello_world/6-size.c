#include <stdio.h>
#include <string.h>




void print_type(char *aan, char *type);

/**
 * main - Runs the program
 *
 * Return: The exit status
 */
int main(void)
{
	print_type("a", "char");
	print_type("an", "int");
	print_type("a", "long int");
	print_type("a", "long long int");
	print_type("a", "float");
	return (0);
}

/**
 * print_type - Prints each type using a standard format.
 * @aan: a vs an
 * @type: the type in string representation.
 */
void print_type(char *aan, char *type)
{
	int size;

	if (!strcmp("char", type))
		size = sizeof(char);
	if (!strcmp(type, "int"))
		size = sizeof(int);
	if (!strcmp(type, "long int"))
		size = sizeof(long int);
	if (!strcmp(type, "long long"))
		size = sizeof(long long double);
	if (!strcmp(type, "float"))
		size = sizeof(float);

	printf("Size of %s %s: %d byte(s)\n", aan, type, size);
}


