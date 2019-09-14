#include "lists.h"

/**
 * add_dnodeint_end - add a doubly linked list node as the new end
 * @head: the current head
 * @n: the node value
 * Return: the address of the new node or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h = NULL;
	dlistint_t *h2 = NULL;
	dlistint_t *new = NULL;

	if (!head)
	{
		return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (!(*head))
	{
		*head = new;
		return (new);
	}
	h = *head;
	h2 = *head;
	while (h2->prev)
		h2 = h2->prev
	while (h->next)
		h = h->next
	new->prev = h;
	h->next = new;

	*h = h2;
	return (new);
}
