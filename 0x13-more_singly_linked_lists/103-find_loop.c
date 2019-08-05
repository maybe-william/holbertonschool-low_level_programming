#include "lists.h"

/**
 * find_listint_loop - function description
 * @head: parameter description
 * Return: return description
 */
listint_t *find_listint_loop(listint_t *head)
{
	ll *temp = head;
	int i = 0;

	if (!head)
		return (NULL);
	while (head->next)
	{
		for (i = 0; i < 1000000; i++)
		{
			if (temp->next == NULL)
				return (NULL);
			if (temp->next == head)
				return (head);
			temp = temp->next;
		}
		head = head->next;
		temp = head;
	}
	return (NULL);
}
