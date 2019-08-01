#include "lists.h"
#include <string.h>

/**
 * add_node - function description
 * @head: parameter description
 * @str: parameter description
 * Return: return description
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *x;
	int len = 0;

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

	x->next = head;

	head = &x;
	return (x);
}
