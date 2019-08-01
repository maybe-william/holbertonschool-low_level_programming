#include "lists.h"
#include <stdio.h>

/**
 * do_nothing0 - does nothing
 * @x: a linked list
 */
void do_nothing0(list_t *x)
{
	(void)x;
}



/**
 * list_map0 - map an operation over a list
 * @head: the head of the list
 * @f: the operation to do
 * Return: the number of nodes
 */
size_t list_map0(list_t *head, void (*f)(list_t *))
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
 * print_node - print the str in a single node
 * @n: the node
 *
 *
 */
void print_node(list_t *n)
{
	if (!(n->str))
		printf("[0] (nil)\n");
	else
	{
		printf("[%i] %s\n", n->len, n->str);
	}
}

/**
 * print_list - function description
 * @h: parameter description
 * Return: return description
 */
size_t print_list(const list_t *h)
{
	size_t num = 0;

	num = list_map0((list_t *)h, print_node);
	return (num);
}
