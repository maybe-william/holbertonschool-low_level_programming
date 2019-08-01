#include "lists.h"

/**
 * print_node - print the str in a single node
 * @n: the node
 *
 *
 */
void print_node(list_t *n)
{
	if (!(n->str))
		printf("[0] (nil)\n");
	else
	{
		printf("[%i] %s\n", n->len, n->str);
	}
}

/**
 * print_list - function description
 * @h: parameter description
 * Return: return description
 */
size_t print_list(const list_t *h)
{
	size_t num = 0;

	num = list_map(h, print_node);
	return (num);
}
