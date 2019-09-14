#include "lists.h"

/**
 * add_dnodeint - add a doubly linked list node as the new head
 * @head: the current head
 * @n: the node value
 * Return: the address of the new node or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *h = NULL;
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
	while (h->prev)
		h = h->prev
	new->next = h;
	h->prev = new;

	*h = new;
	return (new);
}
