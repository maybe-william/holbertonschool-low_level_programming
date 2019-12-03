#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a node as the right node
 * @parent: the parent node
 * @value: the value
 * Return: the new node or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;
	binary_tree_t *pright;

	if (parent == NULL)
		return (NULL);

	pright = parent->right;
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->parent = parent;
	new->right = pright;
	new->left = NULL;
	new->n = value;

	parent->right = new;
	if (new->right != NULL)
		new->right->parent = new;
	return (new);
}
