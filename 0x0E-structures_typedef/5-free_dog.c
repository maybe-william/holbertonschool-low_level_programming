#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - set the dog free
 * @d: the dog
 */
void free_dog(dog_t *d)
{
	free(d);
}
