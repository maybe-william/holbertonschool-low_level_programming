#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print a dog
 * @d: the dog
 */
void print_dog(struct dog *d)
{
	char *nm;
	char *own;

	if (d)
	{
		nm = d->name;
		own = d->owner;

		if (!nm)
			nm = "(nil)";
		if (!own)
			own = "(nil)";

		printf("Name: %s\nAge: %.6f\nOwner: %s\n", nm, d->age, own);
	}
}
