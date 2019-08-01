#include "lists.h"

/**
 * add_node_end - function description
 * @head: parameter description
 * @str: parameter description
 * Return: return description
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *x;
	int len;
	list_t *y = *head;

	if (!y)
		return ((void *)0);

	while (y->next != NULL)
	{
		y = y->next;
	}

	x = malloc(sizeof(list_t));
	if (!x)
		return ((void *)0);
	if (!str)
	{
		x->len = 0;
		x->str = NULL;
	} else
	{
		len = strlen(str);
		x->str = strdup(str);
		if (!(x->str))
		{
			free(x);
			return ((void *) 0);
		}
		x->len = len;
	}

	x->next = NULL;

	y->next = x;

	return (*head);
}
