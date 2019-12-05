#include "binary_trees.h"

/**
 * binary_tree_is_bst - check if a tree is a bst
 * @tree: the tree to check
 * Return: 1 if binary search tree, 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	int valid;

	if (tree == NULL)
		return (0);

	valid = 1;
	if (tree->left)
	{
		valid = valid && (tree->left->n < tree->n);
		valid = valid && binary_tree_is_bst(tree->left);
	}
	if (tree->right)
	{
		valid = valid && (tree->right->n > tree->n);
		valid = valid && binary_tree_is_bst(tree->right);
	}

	return (valid);

}
