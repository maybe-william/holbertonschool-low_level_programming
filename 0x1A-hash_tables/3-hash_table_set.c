#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_set - add a k,v pair to a hash table
 * @ht: the hash table
 * @key: the key
 * @value: the value
 * Return: 1 if succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int ind = 0;
	hash_node_t *x = NULL;
	hash_node_t *current = NULL;

	if (!ht)
		return (0);
	if (!key)
		return (0);

	x = malloc(sizeof(hash_node_t));
	if (!x)
		return (0);

	ind = key_index((const unsigned char *)key, ht->size);
	current = (ht->array)[ind];

	x->key = (char *)key;
	x->value = (char *)value;
	x->next = current;

	(ht->array)[ind] = x;
	return (1);
}
