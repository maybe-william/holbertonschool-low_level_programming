#include "lists.h"

/**
 * lm0 - map over a linked list.
 * @l: the list
 * @f: the function to do at every node.
 * Return: the node count
 */
size_t lm0(ll *l, void (*f)(ll *, ll *, ll *, int))
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
 * printnode - print a node
 * @p: the previous
 * @c: the current
 * @n: the next
 * @i: the index
 */
void printnode(ll *p, ll *c, ll *n, int i)
{
	(void)p;
	(void)n;
	(void)i;
	printf("%i\n", c->n);
}

/**
 * print_listint - function description
 * @h: parameter description
 * Return: return description
 */
size_t print_listint(const listint_t *h)
{
	return (lm0((ll *)h, printnode));
}
