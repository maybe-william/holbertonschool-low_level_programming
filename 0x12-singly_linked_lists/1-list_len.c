#include "lists.h"


/**
 * do_nothing1 - does nothing
 * @x: a linked list
 */
void do_nothing1(list_t *x)
{
	(void)x;
}



/**
 * list_map1 - map an operation over a list
 * @head: the head of the list
 * @f: the operation to do
 * Return: the number of nodes
 */
size_t list_map1(list_t *head, void (*f)(list_t *))
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
 * list_len - function description
 * @h: parameter description
 * Return: return description
 */
size_t list_len(const list_t *h)
{
	return (list_map1((list_t *)h, do_nothing1));
}
