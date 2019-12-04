#include "binary_trees.h"

size_t leaf_helper(const binary_tree_t *tree);

/**
 * binary_tree_leaves - find the leaves of a tree
 * @tree: the tree
 * Return: the leaf count
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (leaf_helper(tree));
}

/**
 * leaf_helper - recursive helper with accumulator
 * @tree: the tree
 * Return: the leaves of a tree
 */
size_t leaf_helper(const binary_tree_t *tree)
{
	size_t a, b;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	a = leaf_helper(tree->left);
	b = leaf_helper(tree->right);
	return (a + b);
}
