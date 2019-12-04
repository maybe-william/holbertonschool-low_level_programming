#include "binary_trees.h"

/**
 * binary_tree_is_root - check if the node is root
 * @node: the node
 * Return: 1 if root, otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent)
		return (0);
	return (1);
}
