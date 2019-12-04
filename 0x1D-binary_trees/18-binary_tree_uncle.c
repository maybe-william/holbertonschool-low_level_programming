#include "binary_trees.h"

/**
 * binary_tree_uncle - get an uncle
 * @node: the node to get the uncle of
 * Return: the uncle or NULL if not possible
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
