#include "lists.h"

/**
 * lookup1 - check if an address has been visited before.
 * @adds: addresses
 * @a: sought address
 * Return: 1 if found, 0 if 0 found first.
 */
int lookup1(ll **adds, ll *a)
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
 * free_listint_safe - function description
 * @h: parameter description
 * Return: return description
 */
size_t free_listint_safe(listint_t **h)
{
	ll **adds;
	ll *head = *h;
	ll *temp;
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
		if (lookup1(adds, (ll *)head))
		{
			free(adds);
			*h = NULL;
			return (count);
		}
		adds[aind] = (ll *)head;
		aind++;
		count++;

		temp = head->next;
		free(head);
		head = temp;
	}

	free(adds);
	*h = NULL;
	return (count);

}
