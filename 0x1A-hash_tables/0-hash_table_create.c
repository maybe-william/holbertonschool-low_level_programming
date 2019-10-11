#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - create an empty hash table
 * @size: the number of buckets
 * Return: an empty hash table with (size) buckets
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *meta = NULL;
	hash_node_t **tab = NULL;
	unsigned long int i = 0;

	if (size == 0)
		return (NULL);
	meta = malloc(sizeof(hash_table_t));
	if (meta == NULL)
		return (NULL);
	tab = malloc(sizeof(hash_node_t *) * size);
	if (tab == NULL)
	{
		free(meta);
		return (NULL);
	}

	meta->size = size;
	meta->array = tab;

	for (i = 0; i < size; i++)
		tab[i] = NULL;

	return (meta);
}
