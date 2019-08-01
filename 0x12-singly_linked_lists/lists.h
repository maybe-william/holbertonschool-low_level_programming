#ifndef HOLBERTON_H_
#define HOLBERTON_H_
#include <stddef.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

int _putchar(char);

size_t print_list(const list_t *h);

size_t list_len(const list_t *h);

list_t *add_node(list_t **head, const char *str);

list_t *add_node_end(list_t **head, const char *str);

void free_list(list_t *head);

/**
 * do_nothing - does nothing
 * @x: a linked list
 */
void do_nothing(list_t *x)
{
	(void)x;
}

/**
 * list_map - map an operation over a list
 * @head: the head of the list
 * @f: the operation to do
 */
size_t list_map(list_t *head, void (*f)(list_t *))
{
	list_t *h2 = head;
	list_t *tmp;
	size_t num = 0;

	while (h2 != NULL)
	{
		tmp = h2->next;
		f(h2);
		h2 = tmp;
		num++;
	}
	return (num);
}

#endif
