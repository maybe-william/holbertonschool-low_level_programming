#include "lists.h"

/**
 * pop_listint - function description
 * @head: parameter description
 * Return: return description
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int val;

	if (*head)
	{
		(*head) = (*head)->next;
		val = temp->n;
		free(temp);
		return (val);
	}
	else
		return (0);
}
