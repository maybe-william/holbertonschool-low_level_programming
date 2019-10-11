#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * shash_table_create - create an empty hash table
 * @size: the number of buckets
 * Return: an empty shash table with (size) buckets
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *meta = NULL;
	shash_node_t **tab = NULL;
	unsigned long int i = 0;

	if (size == 0)
		return (NULL);
	meta = malloc(sizeof(shash_table_t));
	if (meta == NULL)
		return (NULL);
	tab = malloc(sizeof(shash_node_t *) * size);
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

/**
 * s_check_key - check if a key exists in a linked list
 * @ll: the linked list
 * @key: the key
 * Return: NULL if not found, otherwise the node
 */
shash_node_t *s_check_key(shash_node_t *ll, char *key)
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
 * shash_table_set - add a k,v pair to a hash table
 * @ht: the shash table
 * @key: the key
 * @value: the value
 * Return: 1 if succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int ind = 0;
	shash_node_t *x = NULL;
	shash_node_t *current = NULL;
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
	x = s_check_key(current, (char *)key);
	if (!x)
	{
		x = malloc(sizeof(shash_node_t));
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


/**
 * shash_table_get - add a k,v pair to a hash table
 * @ht: the shash table
 * @key: the key
 * Return: value if succeeded, NULL otherwise
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int ind = 0;
	shash_node_t *x = NULL;

	if (!ht || ht->size == 0)
		return (NULL);
	if (!key || key[0] == '\0')
		return (NULL);

	ind = key_index((const unsigned char *)key, ht->size);

	x = s_check_key(ht->array[ind], (char *)key);
	if (!x)
	{
		return (NULL);
	}
	return (x->value);
}

/**
 * shash_table_print - function description
 * @ht: parameter description
 */
void shash_table_print(const shash_table_t *ht)
{
	unsigned long int i = 0;
	int first = 1;
	shash_node_t *x = NULL;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		x = (ht->array)[i];
		if (x != NULL)
		{
			if (first != 1)
				printf(", ");
			first = 0;
			while (x != NULL)
			{
				if (x != (ht->array)[i])
					printf(", ");
				printf("'%s': ", x->key);
				printf("'%s'", x->value);
				x = x->next;
			}
		}
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - function description
 * @ht: parameter description
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	unsigned long int i = 0;
	int first = 1;
	shash_node_t *x = NULL;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		x = (ht->array)[i];
		if (x != NULL)
		{
			if (first != 1)
				printf(", ");
			first = 0;
			while (x != NULL)
			{
				if (x != (ht->array)[i])
					printf(", ");
				printf("'%s': ", x->key);
				printf("'%s'", x->value);
				x = x->next;
			}
		}
	}
	printf("}\n");
}

/**
 * shash_table_delete - function description
 * @ht: parameter description
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i = 0;
	shash_node_t *ll = NULL;
	shash_node_t *tmp = NULL;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		ll = (ht->array)[i];
		while (ll)
		{
			tmp = ll;
			ll = ll->next;
			free(tmp->value);
			free(tmp->key);
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}

