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
	{
		d->age = 0;
		free(d);
	}
	if (n != NULL)
		free(n);
	if (o != NULL)
		free(o);
}
