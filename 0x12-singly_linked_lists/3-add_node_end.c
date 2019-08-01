#include "lists.h"

/**
 * do_nothing3 - does nothing
 * @x: a linked list
 */
void do_nothing3(list_t *x)
{
	(void)x;
}



/**
 * list_map3 - map an operation over a list
 * @head: the head of the list
 * @f: the operation to do
 * Return: the number of nodes
 */
size_t list_map3(list_t *head, void (*f)(list_t *))
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
 * strlen2 - get the strlen
 * @x: the str
 * Return: the length
 */
int strlen2(char *x)
{
	int count = 0;

	while (x[count])
		count++;

	return (count);
}


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

	while (y && y->next != NULL)
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
		len = strlen2(str);
		x->str = strdup(str);
		if (!(x->str))
		{
			free(x);
			return ((void *) 0);
		}
		x->len = len;
	}

	x->next = NULL;

	if (y)
	{
		y->next = x;
		return (*head);
	}
	*head = x;
	return (x);
}
