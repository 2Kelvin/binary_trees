#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_full - checks if BTree is full
 * @tree: binary tree's root node pointer
 * Return: 1 or 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else if (tree->left == NULL && tree->right == NULL)
		return (1);
	else if (tree->right && tree->left)
		return (binary_tree_is_full(tree->left) &&
				 binary_tree_is_full(tree->right));
	else
		return (0);
}
