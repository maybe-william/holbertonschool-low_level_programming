#include "binary_trees.h"

/**
 * binary_tree_is_full - return 1 if the tree is full
 * @tree: the tree
 * Return: 1 if full, 0 otherwise, 0 if NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	binary_tree_t *l;
	binary_tree_t *r;

	if (tree == NULL)
		return (0);

	l = tree->left;
	r = tree->right;
	if ((l && !r) || (r && !l))
		return (0);

	if (l && r)
		return (binary_tree_is_full(l) && binary_tree_is_full(r));

	return (1);
}
