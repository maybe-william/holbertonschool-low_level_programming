#include "sort.h"


/**
 * myswap - swap two nodes
 * @a: node a
 * @b: node b
 * @head: the head of the list as a double pointer
 */
void myswap(listint_t *a, listint_t *b, listint_t **head)
{
	listint_t *temp = NULL;

	if (a == NULL || b == NULL || head == NULL)
		return;

	if (*head == a)
		*head = b;

	temp = a->prev;
	a->prev = b;
	b->prev = temp;
	if (b->prev)
		b->prev->next = b;

	temp = b->next;
	b->next = a;
	a->next = temp;
	if (a->next)
		a->next->prev = a;

	print_list((const listint_t *)*head);
}

/**
 * is_sorted - check if list is sorted
 * @head: the head of the list
 * Return: true or false
 */
int is_sorted(listint_t *head)
{
	listint_t *n = head;

	while (n != NULL && n->next != NULL)
	{
		if (n->n > n->next->n)
			return (0);
		n = n->next;
	}
	return (1);
}

/**
 * cocktail_sort_list - function description
 * @list: parameter description
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *curr = NULL;
	int reverse = 0, sorted = 0;

	if (!list || !(*list) || !((*list)->next))
		return;

	curr = *list;
	while (!sorted)
	{
		while ((reverse && curr->prev) || (!reverse && curr->next))
		{
			if (reverse)
			{
				if (curr->prev->n > curr->n)
					myswap(curr->prev, curr, list);
				else
					curr = curr->prev;
			}
			else
			{
				if (curr->next->n < curr->n)
					myswap(curr, curr->next, list);
				else
					curr = curr->next;
			}
		}
		reverse = !reverse;
		sorted = is_sorted(*list);
	}
}
