#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * hash_table_print - function description
 * @ht: parameter description
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int first = 1;
	hash_node_t *x = NULL;

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
