#include "binary_trees.h"
#include <stdlib.h>
#include <limits.h>

/**
  * handler - does the actual BST check
  * @tree: BTree root node ptr
  * @minV: min value
  * @maxV: max value
  * Return: 1 (true) or 0 (false)
  */
int handler(const binary_tree_t *tree, int minV, int maxV)
{
	if (!tree)
		return (1);
	if (tree->n < minV || tree->n > maxV)
		return (0);
	return (handler(tree->left, minV, tree->n - 1) &&
			 handler(tree->right, tree->n + 1, maxV));
}

/**
  * binary_tree_is_bst - check BT if is BST
  * @tree: BT root node ptr
  * Return: 1 or 0
  */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (handler(tree, INT_MIN, INT_MAX));
}
