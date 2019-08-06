#include "lists.h"

/**
 * lm10 - map over a linked list.
 * @l: the list
 * @q: the desired index
 * @f: the function to do at every node.
 * Return: the resultant node
 */
ll *lm10(ll *l, int q, void (*f)(ll *, ll *, ll *, int, int, ll **))
{
	int i = 0;
	ll *res = l;
	ll *prev = (void *)0;
	ll *next = (void *)0;
	ll *temp = (void *)0;
	ll *curr = l;

	while (curr != NULL)
	{
		temp = curr->next;
		next = temp;
		f(prev, curr, next, i, q, &res);
		prev = curr;
		i++;
		curr = temp;
	}
	return (res);
}

/**
 * delnode - insert a node
 * @p: the previous
 * @c: the current
 * @n: the next
 * @i: the index
 * @q: the desired index
 * @out: the head address to change
 */
void delnode(ll *p, ll *c, ll *n, int i, int q, ll **out)
{
	if (i == q)
	{
		if (p)
			p->next = n;
		else
		{
			if (n)
				*out = n;
			else
				*out = (void *)0;
		}
		free(c);
	}
}

/**
 * delete_nodeint_at_index - function description
 * @head: parameter description
 * @index: parameter description
 * Return: return description
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (!head)
		return (-1);
	if (!(*head))
		return (-1);

	*head = lm10(*head, index, delnode);
	return (1);
}
