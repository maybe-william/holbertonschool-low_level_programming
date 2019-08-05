#include "lists.h"

/**
 * lm9 - map over a linked list.
 * @l: the list
 * @q: the desired index
 * @n: the desired data
 * @f: the function to do at every node.
 * Return: the resultant node
 */
ll *lm9(ll *l, int q, int n, void (*f)(ll *, ll *, ll *, int, int, int, ll **))
{
	int i = 0;
	ll *res = (void *)0;
	ll *prev = (void *)0;
	ll *next = (void *)0;
	ll *temp = (void *)0;
	ll *curr = l;

	while (curr != NULL)
	{
		temp = curr->next;
		next = temp;
		f(prev, curr, next, i, q, n, &res);
		prev = curr;
		i++;
		curr = temp;
	}
	return (res);
}

/**
 * insnode - insert a node
 * @p: the previous
 * @c: the current
 * @n: the next
 * @i: the index
 * @q: the desired index
 * @data: the desired data
 * @out: the address to change
 */
void insnode(ll *p, ll *c, ll *n, int i, int q, int data, ll **out)
{
	(void)n;
	if (i == q)
	{
		*out = malloc(sizeof(ll));
		if (*out)
		{
			(*out)->n = data;
			p->next = *out;
			(*out)->next = c;
		}
	}
}

/**
 * insert_nodeint_at_index - function description
 * @head: parameter description
 * @idx: parameter description
 * @n: parameter description
 * Return: return description
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	ll *x;

	if (n == 0)
	{
		x = malloc(sizeof(ll));
		if (x)
		{
			x->n = n;
			x->next = (*head);
			*head = x;
			return (x);
		}
		else
			return ((void *)0);
	}
	else
		return (lm9(*head, idx, n, insnode));
}
