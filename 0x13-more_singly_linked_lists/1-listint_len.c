#include "lists.h"

/**
 * lm1 - map over a linked list.
 * @l: the list
 * @f: the function to do at every node.
 * Return: the node count
 */
size_t lm1(ll *l, void (*f)(ll *, ll *, ll *, int))
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
 * nothingnode - do nothing
 * @p: the previous
 * @c: the current
 * @n: the next
 * @i: the index
 */
void nothingnode(ll *p, ll *c, ll *n, int i)
{
	(void)p;
	(void)c;
	(void)n;
	(void)i;
}

/**
 * listint_len - function description
 * @h: parameter description
 * Return: return description
 */
size_t listint_len(const listint_t *h)
{
	return (lm1((ll *)h, nothingnode));
}
