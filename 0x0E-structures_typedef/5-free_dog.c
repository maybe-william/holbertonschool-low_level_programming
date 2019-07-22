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
	if (n != NULL && n[0] != '\0')
		free(n);
	if (o != NULL && o[0] != '\0')
		free(o);
}
