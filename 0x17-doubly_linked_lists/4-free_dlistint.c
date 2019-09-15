#include "lists.h"

/**
 * free_dlistint - free a doubly linked list
 * @head: the list to free
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *h;
	dlistint_t *temp;

	if (!head)
		return;
	h = head;
	while (h->prev)
		h = h->prev;
	while (h)
	{
		temp = h->next;
		free(h);
		h = temp;
	}

}
