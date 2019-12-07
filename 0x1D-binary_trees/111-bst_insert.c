#include "binary_trees.h"

/**
 * bst_ins_err - check for error conditions
 * @tree: the tree
 * @new: a new node
 * Return: 1 if err, 0 if fine
 */
int bst_ins_err(bst_t **tree, bst_t *new)
{
	if (tree == NULL)
		return (1);
	if (new == NULL)
		return (1);
	new->parent = NULL;
	new->left = NULL;
	new->right = NULL;
	return (0);
}


/**
 * bst_insert - function description
 * @tree: parameter description
 * @value: parameter description
 * Return: return description
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *new, *cur;
	int lt = 0;

	new = binary_tree_node(NULL, value);
	if (bst_ins_err(tree, new))
		return (NULL);
	if (*tree == NULL)
	{
		*tree = new;
		return (new);
	}
	cur = *tree;
	while (cur && cur != new)
	{
		lt = cur->n < value;
		new->parent = cur;
		if (cur->n == value)
		{
			free(new);
			return (NULL);
		}
		if (lt)
		{
			if (!cur->right)
				cur->right = new;
			else
				cur = cur->right;
		}
		if (!lt)
		{
			if (!cur->left)
				cur->left = new;
			else
				cur = cur->left;
		}
	}
	return (new);
}
