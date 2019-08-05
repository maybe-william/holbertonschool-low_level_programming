#include "lists.h"

/**
 * lm7 - map over a linked list.
 * @l: the list
 * @q: the sought index
 * @f: the function to do at every node.
 * Return: the node count
 */
ll *lm7(ll *l, int q, void (*f)(ll **, ll *, int, int))
{
	int i = 0;
	ll *goal = (void *)0;
	ll *temp = (void *)0;
	ll *curr = l;

	while (curr != NULL)
	{
		temp = curr->next;
		f(&goal, curr, i, q);
		i++;
		curr = temp;
	}
	return (goal);
}

/**
 * getnode - get a node
 * @target: the goal
 * @c: the current
 * @i: the index
 * @q: the sought index
 */
void getnode(ll **target, ll *c, int i, int q)
{
	if (q == i)
		*target = c;
}

/**
 * get_nodeint_at_index - function description
 * @head: parameter description
 * @index: parameter description
 * Return: return description
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	return (lm7(head, index, getnode));
}
