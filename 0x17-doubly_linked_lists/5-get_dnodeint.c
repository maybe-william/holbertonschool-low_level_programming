#include "lists.h"

/**
 * get_dnodeint_at_index - get the node at a given index
 * @head: the head of the list
 * @index: the index to give
 * Return: the node at the given index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *h = head;
	unsigned int count = 0;

	if (!h)
		return (NULL);
	while (h->prev)
		h = h->prev;
	while (h)
	{
		if (count == index)
			return (h);
		if (count > index)
			return (NULL);
		h = h->next;
		count++;
	}
	return (NULL);
}
