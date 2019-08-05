#include "lists.h"

/**
 * lm8 - map over a linked list.
 * @l: the list
 * @f: the function to do at every node.
 * Return: the node count
 */
int lm8(ll *l, int (*f)(ll *, int))
{
	int i = 0;
	ll *temp = (void *)0;
	ll *curr = l;

	while (curr != NULL)
	{
		temp = curr->next;
		i = f(curr, i);
		curr = temp;
	}
	return (i);
}

/**
 * sumnode - sum a node to the running sum
 * @c: the current node
 * @i: the current sum
 * Return: the new sum
 */
int sumnode(ll *c, int i)
{
	return ((c->n) + i);
}

/**
 * sum_listint - function description
 * @head: parameter description
 * Return: return description
 */
int sum_listint(listint_t *head)
{
	return (lm8(head, sumnode));
}
