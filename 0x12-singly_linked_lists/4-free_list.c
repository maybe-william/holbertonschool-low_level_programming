#include "lists.h"

/**
 * do_nothing4 - does nothing
 * @x: a linked list
 */
void do_nothing4(list_t *x)
{
	(void)x;
}



/**
 * list_map4 - map an operation over a list
 * @head: the head of the list
 * @f: the operation to do
 * Return: the number of nodes
 */
size_t list_map4(list_t *head, void (*f)(list_t *))
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
	list_map4(head, free_node);
}
