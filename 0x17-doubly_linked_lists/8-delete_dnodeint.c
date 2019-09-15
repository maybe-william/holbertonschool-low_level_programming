#include "lists.h"

/**
 * delete_dnodeint_at_index - delete the node at index in a doubly linked list
 * @head: the head of the linked list
 * @index: the index to delete
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h;
	unsigned int count = 0;

	if (!head)
		return (-1);
	h = *head;
	if (!h)
		return (-1);
	while (h->prev)
		h = h->prev;
	*head = h;
	if (index == 0)
		*head = h->next;
	while (h)
	{
		if (count == index)
		{
			if (h->prev)
				(h->prev)->next = h->next;
			if (h->next)
				(h->next)->prev = h->prev;
			free(h);
			return (1);
		}
		h = h->next;
		count++;
	}
	return (-1);
}
