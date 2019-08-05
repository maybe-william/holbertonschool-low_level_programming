#include "lists.h"

/**
 * add_nodeint - function description
 * @head: parameter description
 * @n: parameter description
 * Return: return description
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *x;

	x = malloc(sizeof(listint_t));
	if (!x)
		return ((void *)0);

	x->n = (int)n;

	x->next = *head;

	*head = x;
	return (x);
}
