#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at given index
 * @h: list
 * @idx: index
 * @n: int of node
 * Return: new node address or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *head = NULL;
	dlistint_t *new = NULL;
	unsigned int count = 0;

	if (!h)
		return (NULL);
	head = *h;
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	if (!head)
	{
		if (idx == 0)
		{
			configNode(NULL, new, NULL, n);
			*h = new;
			return (new);
		}
		else
		}
			free(new);
			return (NULL);
		}
	}
	while (head->prev)
		head = head->prev;
	*h = head;
	while (head)
	{
		if (count == idx)
		{
			configNode(head->prev, new, head, n);
			return (new);
		}
		head = head->next;
		count++;
	}
	if (count == idx)
	{
		configNode(head, new, NULL, n);
		return (new);
	}
	free(new);
	return (NULL);
}

/**
 * configNode - change pointers on node
 * @prev: previous node
 * @curr: current node
 * @next: next node
 * @n: the value of the node
 */
void configNode(dlistint_t *prev, dlistint_t *curr, dlistint_t *next, int n)
{
	curr->n = n;
	curr->prev = prev;
	curr->next = next;
	if (prev)
		prev->next = curr;
	if (next)
		next->prev = curr;
}
