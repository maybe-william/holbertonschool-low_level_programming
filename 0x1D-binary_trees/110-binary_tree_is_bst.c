#include "binary_trees.h"
#include <limits.h>

int bin_help(const binary_tree_t *tree, int max, int min);

/**
 * binary_tree_is_bst - check if a tree is a bst
 * @tree: the tree to check
 * Return: 1 if binary search tree, 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	return (bin_help(tree, INT_MAX, INT_MIN));
}



/**
 * bin_help - helper function for the is_bst function
 * @tree: the current node
 * @max: the max bound
 * @min: the min bound
 * Return: 1 if bst, 0 otherwise
 */
int bin_help(const binary_tree_t *tree, int max, int min)
{
	int valid, tmp;

	if (tree == NULL)
		return (0);

	valid = 1;
	valid = valid && ((tree->n - 1) < max);
	valid = valid && ((tree->n + 1) > min);
	if (tree->left)
	{
		valid = valid && (tree->left->n < tree->n);
		tmp = bin_help(tree->left, tree->n - 1, min);
		valid = valid && tmp;
	}
	if (tree->right)
	{
		valid = valid && (tree->right->n > tree->n);
		tmp = bin_help(tree->right, max, tree->n + 1);
		valid = valid && tmp;
	}

	return (valid);

}
