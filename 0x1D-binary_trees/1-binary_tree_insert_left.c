#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a node as the left node
 * @parent: the parent node
 * @value: the value
 * Return: the new node or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;
	binary_tree_t *pleft;

	if (parent == NULL)
		return (NULL);

	pleft = parent->left;
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->parent = parent;
	new->left = pleft;
	new->right = NULL;
	new->n = value;

	parent->left = new;
	if (new->left != NULL)
		new->left->parent = new;
	return (new);
}
