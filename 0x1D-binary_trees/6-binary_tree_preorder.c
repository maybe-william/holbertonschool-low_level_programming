#include "binary_trees.h"

/**
 * binary_tree_preorder - visit current, left, right recursively
 * @tree: the node to visit
 * @func: the visit
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
