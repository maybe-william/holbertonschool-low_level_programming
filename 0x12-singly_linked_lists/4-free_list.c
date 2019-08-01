#include "holberton.h"

/**
 * free_node - free a single node
 * @n: the node
 *
 */
void free_node(list_t *n)
{
	free(n->str);
	free(n);
}

/**
 * free_list - function description
 * @head: parameter description
 */
void free_list(list_t *head)
{
	list_map(head, free_node);
}
