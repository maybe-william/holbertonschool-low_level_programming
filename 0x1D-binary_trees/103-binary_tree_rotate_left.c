#include "binary_trees.h"

/**
 * binary_tree_rotate_left - rotate a root node left
 * @root: the current root node
 * Return: the pointer to the new root node
 */
btt *binary_tree_rotate_left(btt *root)
{
	btt *l = root;
	btt *r;
	btt *mid;

	if (root == NULL || root->right == NULL)
		return (NULL);

	r = l->right;
	mid = l->right->left;

	r->left = l;
	r->parent = l->parent;

	l->right = mid;
	l->parent = r;

	if (mid != NULL)
	{
		mid->parent = l;
	}

	return (r);
}
