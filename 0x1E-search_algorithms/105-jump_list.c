#include "search_algos.h"
#include <math.h>

/**
 * jump_list - function description
 * @list: parameter description
 * @size: parameter description
 * @value: parameter description
 * Return: return description
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	unsigned int m, start, end, i, j;
	listint_t *prev;
	listint_t *nex;

	if (!list)
		return (NULL);
	m = (int)sqrt(size);
	prev = NULL;
	nex = list;
	start = 0;
	end = size - 1;
	while ((nex->next) && (nex->n) < value)
	{
		prev = nex;
		for (i = 0; i < m; i++)
			if (nex->next)
				nex = nex->next;
		j = nex->index;
		printf("Value checked array [%d] = [%d]\n", j, nex->n);
	}
	if (prev)
		start = prev->index;
	if (nex)
		end = nex->index;
	printf("Value found between indexes [%d] and [%d]\n", start, end);
	j = start;
	while (j < size && j <= end)
	{
		printf("Value checked array [%d] = [%d]\n", j, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
		j++;
	}
	return (NULL);
}
