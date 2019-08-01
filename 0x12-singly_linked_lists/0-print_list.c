#include "holberton.h"

/**
 * print_node - print the str in a single node
 * @n: the node
 *
 *
 */
void print_node(list_t *n)
{
	printf(n->str);
}

/**
 * print_list - function description
 * @h: parameter description
 * Return: return description
 */
size_t print_list(const list_t *h)
{
	list_map(h, print_node);
}
