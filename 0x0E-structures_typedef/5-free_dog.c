#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - set the dog free
 * @d: the dog
 */
void free_dog(dog_t *d)
{
	char *n;
	char *o;

	if (d)
	{
		n = d->name;
		o = d->owner;

		free(d);

		if (n != NULL && o != n)
			free(n);
		if (o != NULL)
			free(o);
	}
}
