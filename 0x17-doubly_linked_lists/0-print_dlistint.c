#include "lists.h"

/**
 * print_dlistint - print all members of a linked list
 * @h: the head of the linked list
 * Return: the size of the linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *head = h;
	size_t count = 0;

	/* if null, return */
	if (!head)
	{
		return (0);
	}
	/* if not head, move to head first */
	while (head->prev)
	{
		head = head->prev;
	}
	/* go through each one, inc count, print elem */
	while (head->next)
	{
		printf("%i\n", head->n);
		head = head->next;
		count++;
	}
	printf("%i\n", head->n);

	return (count + 1);
}
