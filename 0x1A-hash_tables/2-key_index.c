#include "hash_tables.h"
#include <stdlib.h>

/**
 * key_index - get the index to store the key at in the array
 * @key: the key to store
 * @size: the size of the array
 * Return: the index in the array to store the key in
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL)
		return (0);
	return (hash_djb2(key) % size);
}
