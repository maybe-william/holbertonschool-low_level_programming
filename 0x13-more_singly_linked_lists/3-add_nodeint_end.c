#include "lists.h"

/**
 * add_nodeint_end - function description
 * @head: parameter description
 * @n: parameter description
 * Return: return description
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *x;
	listint_t *temp = *head;

	x = malloc(sizeof(listint_t));
	if (!x)
		return ((void *)0);

	x->n = (int)n;

	x->next = (void *)0;

	if (!temp)
	{
		*head = x;
		return (x);
	}

	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = x;
	return (*head);

}
