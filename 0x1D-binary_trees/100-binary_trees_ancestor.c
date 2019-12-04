#include "binary_trees.h"

/**
 * binary_trees_ancestor - find the closest ancestor for two nodes
 * @f: the first node
 * @s: the second node
 * Return: the pointer to the ancestor, or NULL
 */
btt *binary_trees_ancestor(const btt *f, const btt *s)
{
	/*
	 * It's important to note that btt is used in this function
	 * as a synonym for binary_tree_t because the latter was too
	 * long and caused line count to go over 80 characters.
	 */
	btt *first;
	btt *second;

	if (f == NULL || s == NULL)
		return (NULL);

	first = (btt *)f;
	second = (btt *)s;
	for (first = (btt *)f; first != NULL; first = first->parent)
	{
		for (second = (btt *)s; second != NULL; second = second->parent)
		{
			if (first == second)
			{
				return (first);
			}
		}
	}

	return (NULL);
}
