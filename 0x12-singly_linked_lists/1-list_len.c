#include "lists.h"

/**
 * list_len - function description
 * @h: parameter description
 * Return: return description
 */
size_t list_len(const list_t *h)
{
	return (list_map(h, do_nothing));
}
