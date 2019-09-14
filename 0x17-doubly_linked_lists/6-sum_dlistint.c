#include "lists.h"

/**
 * sum_dlistint - sum the elements in a list
 * @head: the list
 * Return: return sum or 0 if empty list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *h = head;
	int sum = 0;

	if (!h)
		return (sum);
	while (h->prev)
		h = h->prev;
	while (h)
	{
		sum = sum + h->n;
		h = h->next;
	}
	return (sum);
}
