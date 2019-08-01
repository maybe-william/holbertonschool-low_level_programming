#include "holberton.h"

/**
 * list_len - function description
 * @h: parameter description
 * Return: return description
 */
size_t list_len(const list_t *h)
{
	list_t *h2 = h;
	list_t *tmp;
	size_t count = 0;

	while (h2 != NULL)
	{
		tmp = h2->next;
		count = count + 1;
		h2 = tmp;
	}

	return (count);
}
