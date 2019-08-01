#include "holberton.h"
#include <string.h>

/**
 * add_node - function description
 * @head: parameter description
 * @str: parameter description
 * Return: return description
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *x;
	int len;

	len = strlen(str);

	x = malloc(sizeof(list_t));
	x->str = malloc(len);
	strdup(x->str, str);
	x->len = len;
	x->next = head;

	head = &x;
	return (x);
}
