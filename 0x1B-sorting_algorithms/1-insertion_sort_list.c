#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insertion_sort_list - List
 * @list: Array
 */

void insertion_sort_list(listint_t **list)

{
	listint_t *x;
	listint_t *y;
	listint_t *z;

	if (list == NULL || *list == NULL)
		return;
	x = y = (*list)->next;
	for (; x; x = y = x->next)
	{
		if (y->prev->n > y->n)
		{
			z = x = y->prev;
			for (; z && y->n < z->n; z = y->prev)
			{
				if (y->next)
					y->next->prev = z;
				z->next = y->next;
				y->next = z;
				y->prev = z->prev;
				if (z->prev == NULL)
					*list = y;
				else
					z->prev->next = y;
				z->prev = y;
				print_list(*list);
			}
		}
		else
			continue;
	}
}
