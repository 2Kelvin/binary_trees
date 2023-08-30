#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_nodes - counts nodes with atleast 1 child
 * @tree: binary tree's root node pointer
 * Return: node count
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodeCount = 0;
	size_t lNodes = 0, rNodes = 0;

	if (tree == NULL)
		return (0);
	else if (tree->left == NULL && tree->right == NULL)
		return (0);
	rNodes = binary_tree_nodes(tree->right);
	lNodes = binary_tree_nodes(tree->left);
	nodeCount = lNodes + rNodes + 1;
	return (nodeCount);
}
