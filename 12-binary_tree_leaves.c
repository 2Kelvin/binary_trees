#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_leaves - counts leaves in a binary tree
 * @tree: binary tree's root node pointer
 * Return: leaf count
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leafCount = 0;
	size_t leftCount = 0, rightCount = 0;

	if (tree == NULL)
		return (0);
	else if (tree->right == NULL && tree->left == NULL)
		return (1);
	leftCount = binary_tree_leaves(tree->left);
	rightCount = binary_tree_leaves(tree->right);
	leafCount = leftCount + rightCount;
	return (leafCount);
}
