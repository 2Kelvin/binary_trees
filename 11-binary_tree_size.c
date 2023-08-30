#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: binary tree's root node pointer
 * Return: size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t leftSize = 0, rightSize = 0, totalSize = 0;

	if (tree == NULL)
		return (0);
	leftSize = binary_tree_size(tree->left);
	rightSize = binary_tree_size(tree->right);
	totalSize = rightSize + leftSize + 1;
	return (totalSize);
}
