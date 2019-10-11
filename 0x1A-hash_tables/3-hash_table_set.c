#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * check_key - check if a key exists in a linked list
 * @ll: the linked list
 * @key: the key
 * Return: NULL if not found, otherwise the node
 */
hash_node_t *check_key(hash_node_t *ll, char *key)
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
	char *v = NULL;
	char *k = NULL;

	if (!ht || ht->size == 0 || !key || key[0] == '\0' || !value)
		return (0);
	ind = key_index((const unsigned char *)key, ht->size);
	current = (ht->array)[ind];
	v = malloc(strlen(value) + 1);
	if (!v)
		return (0);
	strcpy(v, value);
	x = check_key(current, (char *)key);
	if (!x)
	{
		x = malloc(sizeof(hash_node_t));
		if (!x)
		{
			free(v);
			return (0);
		}
		k = malloc(strlen(key) + 1);
		if (!k)
		{
			free(v);
			free(x);
			return (0);
		}
		strcpy(k, key);
		x->key = k;
		x->next = current;
		(ht->array)[ind] = x;
	}
	else
		free(x->value);
	x->value = v;
	return (1);
}
