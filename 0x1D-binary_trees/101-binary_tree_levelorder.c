#include "binary_trees.h"

void queue_recur(btt **buf, int head, int tail, void (*func)(int));

/**
 * binary_tree_levelorder - function description
 * @tree: parameter description
 * @func: the function to call on each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	btt *buf[1024];
	int head, tail;

	head = 0;
	tail = 0;
	if (tree == NULL || func == NULL)
		return;
	buf[0] = (btt *)tree;
	queue_recur(buf, head, tail, func);
}

/**
 * queue_recur - recursively queue and unqueue nodes for level-order
 * @buf: the queue
 * @head: the queue head
 * @tail: the queue tail
 * @func: the function to call on each node
 */
void queue_recur(btt **buf, int head, int tail, void (*func)(int))
{
	int n = 0;
	btt *curr;

	curr = buf[head];
	func(curr->n);

	if (curr->left)
	{
		buf[tail + 1] = curr->left;
		n++;
	}
	if (curr->right)
	{
		buf[tail + 2] = curr->right;
		n++;
	}

	if (head == tail + n)
		return;
	queue_recur(buf, (head + 1) % 1024, (tail + n) % 1024, func);
}
