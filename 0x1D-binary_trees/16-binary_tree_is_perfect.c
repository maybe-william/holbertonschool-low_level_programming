#include "binary_trees.h"

int full_check(const binary_tree_t *tree);
int get_max(const binary_tree_t *tree, int acc);
int level_check(const binary_tree_t *tree, int max_level, int acc);

/**
 * binary_tree_is_perfect - check if tree is full and same level
 * @tree: the tree
 * Return: 1 if perfect, 0 otherwise (including NULL tree)
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int f, max_level, levels;

	if (tree == NULL)
		return (0);

	f = full_check(tree);
	max_level = get_max(tree, 0);
	levels = level_check(tree, max_level, 0);
	return (f && levels);
}

/**
 * get_max - get the max height
 * @tree: the node to get the height from
 * @acc: the height so far
 * Return: the max height
 */
int get_max(const binary_tree_t *tree, int acc)
{
	int l, r;

	if (tree == NULL)
		return (acc);
	l = get_max(tree->left, acc + 1);
	r = get_max(tree->right, acc + 1);
	if (r > l)
		return (r);
	return (l);
}

/**
 * level_check - make sure all leaves are level
 * @tree: the tree
 * @max_level: the max level in the tree
 * @acc: the accumulator
 * Return: 1 if good, 0 otherwise
 */
int level_check(const binary_tree_t *tree, int max_level, int acc)
{
	int l, r;

	if (tree == NULL)
	{
		if (acc == max_level)
			return (1);
		return (0);
	}
	l = level_check(tree->left, max_level, acc + 1);
	r = level_check(tree->right, max_level, acc + 1);
	return (r && l);
}


/**
 * full_check - return 1 if the tree is full
 * @tree: the tree
 * Return: 1 if full, 0 otherwise, 0 if NULL
 */
int full_check(const binary_tree_t *tree)
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
		return (full_check(l) && full_check(r));

	return (1);
}

