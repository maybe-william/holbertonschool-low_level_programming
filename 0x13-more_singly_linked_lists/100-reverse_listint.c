#include "lists.h"

/**
 * reverse_listint - function description
 * @head: parameter description
 * Return: return description
 */
listint_t *reverse_listint(listint_t **head)
{
	ll *next;
	ll *prev = (void *)0;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		(*head) = next;
	}
	*head = prev;
	return (prev);
}
