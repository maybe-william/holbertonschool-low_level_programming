#include "lists.h"


/**
 * lookup - check if an address has been visited before.
 * @adds: addresses
 * @a: sought address
 * Return: 1 if found, 0 if 0 found first.
 */
int lookup(ll **adds, ll *a)
{
	int i = 0;

	while (adds[i] != 0)
	{
		if (adds[i] == a)
			return (1);
		i++;
	}
	return (0);
}

/**
 * print_listint_safe - function description
 * @head: parameter description
 * Return: return description
 */
size_t print_listint_safe(const listint_t *head)
{
	ll **adds;
	size_t count = 0;
	unsigned int aind = 0;

	adds = malloc(sizeof(ll *) * 1000);
	if (!adds)
		exit(98);

	for (aind = 0; aind < 1000; aind++)
	{
		adds[aind] = (ll *)0;
	}
	aind = 0;

	while (head)
	{
		if (lookup(adds, (ll *)head))
		{
			printf("-> [%p] %i\n", (void *)head, head->n);
			free(adds);
			return (count);
		}
		adds[aind] = (ll *)head;
		aind++;
		count++;

		printf("[%p] %i\n", (void *)head, head->n);

		head = head->next;
	}

	free(adds);
	return (count);
}
