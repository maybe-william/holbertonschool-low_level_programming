#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - function description
 * @ht: parameter description
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *ll = NULL;
	hash_node_t *tmp = NULL;

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
