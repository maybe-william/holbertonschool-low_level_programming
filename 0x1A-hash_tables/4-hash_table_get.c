#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * check_key_get - check if a key exists in a linked list
 * @ll: the linked list
 * @key: the key
 * Return: NULL if not found, otherwise the node
 */
hash_node_t *check_key_get(hash_node_t *ll, char *key)
{
	while (ll)
	{
		if (strcmp(key, ll->key) == 0)
			return (ll);
		ll = ll->next;
	}
	return (NULL);
}


/**
 * hash_table_get - add a k,v pair to a hash table
 * @ht: the hash table
 * @key: the key
 * Return: value if succeeded, NULL otherwise
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int ind = 0;
	hash_node_t *x = NULL;

	if (!ht || ht->size == 0)
		return (NULL);
	if (!key || key[0] == '\0')
		return (NULL);

	ind = key_index((const unsigned char *)key, ht->size);

	x = check_key_get(ht->array[ind], (char *)key);
	if (!x)
	{
		return (NULL);
	}
	return (x->value);
}
