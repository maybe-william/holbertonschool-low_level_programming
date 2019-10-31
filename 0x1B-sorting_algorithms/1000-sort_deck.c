#include "sort.h"
#include "deck.h"

/**
 * get_kind_val - get a value for the kind
 * @k: the kind
 * Return: A strength value for the kind of a card
 */
int get_kind_val(kind_t k)
{
	switch (k)
	{
		case SPADE:
			return (0);
		case HEART:
			return (100);
		case CLUB:
			return (200);
		case DIAMOND:
			return (300);
	}
	return (0);
}

/**
 * get_val - get the value of a card
 * @s: the value in string form
 * Return: the value for a card
 */
int get_val(const char *s)
{
	switch (s[0])
	{
		case 'A':
			return (1);
		case '2':
			return (2);
		case '3':
			return (3);
		case '4':
			return (4);
		case '5':
			return (5);
		case '6':
			return (6);
		case '7':
			return (7);
		case '8':
			return (8);
		case '9':
			return (9);
		case '1':
			return (10);
		case 'J':
			return (11);
		case 'Q':
			return (12);
		case 'K':
			return (13);
	}
	return (0);
}

/**
 * my_comp - comparator for use with quicksort
 * @a: the element a
 * @b: the element b
 * Return: a - b
 */
int my_comp(const void *a, const void *b)
{
	deck_node_t *aa = *(deck_node_t **)a;
	deck_node_t *bb = *(deck_node_t **)b;
	int ak, bk, av, bv;

	ak = get_kind_val(aa->card->kind);
	bk = get_kind_val(bb->card->kind);

	av = get_val(aa->card->value);
	bv = get_val(bb->card->value);

	return ((ak + av) - (bk + bv));
}

/**
 * sort_deck - function description
 * @deck: parameter description
 */
void sort_deck(deck_node_t **deck)
{
	deck_node_t *mydeck[52];
	deck_node_t *temp = NULL;
	int i = 0;

	if (!deck || !(*deck) || !((*deck)->next))
		return;

	temp = *deck;
	while (temp)
	{
		mydeck[i] = temp;
		i++;
		temp = temp->next;
	}

	qsort((void *)mydeck, 52, sizeof(mydeck[0]), my_comp);

	mydeck[0]->next = mydeck[1];
	mydeck[0]->prev = NULL;
	for (i = 1; i < 51; i++)
	{
		mydeck[i]->prev = mydeck[i - 1];
		mydeck[i]->next = mydeck[i + 1];
	}
	mydeck[51]->next = NULL;
	mydeck[51]->prev = mydeck[50];

	*deck = mydeck[0];
}
