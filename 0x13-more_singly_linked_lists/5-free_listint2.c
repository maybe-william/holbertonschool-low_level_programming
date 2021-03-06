#include "lists.h"

/**
 * lm5 - map over a linked list.
 * @l: the list
 * @f: the function to do at every node.
 * Return: the node count
 */
size_t lm5(ll *l, void (*f)(ll *, ll *, ll *, int))
{
	int i = 0;
	ll *prev = (void *)0;
	ll *next = (void *)0;
	ll *temp = (void *)0;
	ll *curr = l;

	while (curr != NULL)
	{
		temp = curr->next;
		next = temp;
		f(prev, curr, next, i);
		prev = curr;
		i++;
		curr = temp;
	}
	return ((size_t)i);
}

/**
 * freenode5 - free node
 * @p: the previous
 * @c: the current
 * @n: the next
 * @i: the index
 */
void freenode5(ll *p, ll *c, ll *n, int i)
{
	(void)p;
	(void)n;
	(void)i;
	free(c);
}

/**
 * free_listint2 - function description
 * @head: parameter description
 */
void free_listint2(listint_t **head)
{
	if (!head)
		return;
	if (*head)
	{
		lm5(*head, freenode5);
		*head = NULL;
	}
}
