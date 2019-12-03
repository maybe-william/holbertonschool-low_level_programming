#include "binary_trees.h"

/**
 * binary_tree_node - create a new binary tree node
 * @parent: the parent node
 * @value: the value
 * Return: the new node or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	if (parent == NULL)
	{
		return (new);
	}
	if (parent->left == NULL)
	{
		parent->left = new;
		return (new);
	}
	if (parent->right == NULL)
	{
		parent->right = new;
		return (new);
	}
	free(new);
	return (NULL);
}
