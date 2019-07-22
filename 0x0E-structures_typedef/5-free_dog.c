#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - set the dog free
 * @d: the dog
 */
void free_dog(dog_t *d)
{
	char *n = d->name;
	char *o = d->owner;

	if (d)
		free(d);
	if (n)
		free(n);
	if (o)
		free(o);
}
