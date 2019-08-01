#include "lists.h"
#include <string.h>

/**
 * do_nothing2 - does nothing
 * @x: a linked list
 */
void do_nothing2(list_t *x)
{
	(void)x;
}



/**
 * list_map2 - map an operation over a list
 * @head: the head of the list
 * @f: the operation to do
 * Return: the number of nodes
 */
size_t list_map2(list_t *head, void (*f)(list_t *))
{
	list_t *h2 = head;
	list_t *tmp;
	size_t num = 0;

	while (h2 != NULL)
	{
		tmp = h2->next;
		f(h2);
		h2 = tmp;
		num++;
	}
	return (num);
}


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

	x->next = *head;

	*head = x;
	return (x);
}
