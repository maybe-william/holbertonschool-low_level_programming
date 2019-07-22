#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - make a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *n, *o = "";
	int sizen, sizeo, i, j;

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);
	if (name)
		n = name;
	if (owner)
		o = owner;
	for (sizen = 0; n[sizen] != '\0'; sizen++)
		;
	for (sizeo = 0; o[sizeo] != '\0'; sizeo++)
		;
	d->name = malloc(sizen + 1);
	if (!(d->name))
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(sizeo + 1);
	if (!(d->owner))
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	for (i = 0; i <= sizen; i++)
		(d->name)[i] = n[i];
	for (j = 0; j <= sizeo; j++)
		(d->owner)[j] = o[j];
	if (!name)
		free(d->name);
		d->name = (!name) ? NULL : d->name;
	if (!owner)
		free(d->owner);
		d->owner = (!owner) ? NULL : d->owner;
	d->age = age;
	return (d);
}
