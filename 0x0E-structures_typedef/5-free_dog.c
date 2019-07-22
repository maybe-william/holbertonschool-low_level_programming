#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - set the dog free
 * @d: the dog
 */
void free_dog(dog_t *d)
{
	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);
	if (d)
		free(d);
}
