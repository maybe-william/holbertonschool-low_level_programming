#include "holberton.h"

/**
 * add_node_end - function description
 * @head: parameter description
 * @str: parameter description
 * Return: return description
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *x;
	int len;
	list_t *y = *head;

	while (y->next != NULL)
	{
		;
	}




	len = strlen(str);

	x = malloc(sizeof(list_t));
	x->str = malloc(len);
	strdup(x->str, str);
	x->len = len;
	x->next = NULL;
	y->next = x;

	return (*head);
}
