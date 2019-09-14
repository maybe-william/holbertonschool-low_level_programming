#include "lists.h"

/**
 * dlistint_len - return the length of a linked list
 * @h: the head of the linked list
 * Return: the length
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *head = h;
	size_t count = 0;

	/* if the head is null, return 0 */
	if (!head)
		return (0);
	/* move the head to the head */
	while (head->prev)
		head = head->prev;
	/* count them */
	while (head->next)
	{
		count++;
	}

	return (count + 1)
}
