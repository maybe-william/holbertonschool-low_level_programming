#include "binary_trees.h"

/**
 * binary_tree_rotate_right - rotate a root node right
 * @root: the current root node
 * Return: the pointer to the new root node
 */
btt *binary_tree_rotate_right(btt *root)
{
	btt *r = root;
	btt *l;
	btt *mid;

	if (root == NULL || root->left == NULL)
		return (NULL);

	l = r->left;
	mid = r->left->right;

	l->right = r;
	l->parent = r->parent;

	r->left = mid;
	r->parent = l;

	if (mid != NULL)
	{
		mid->parent = r;
	}

	return (l);
}
