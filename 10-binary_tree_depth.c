#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_depth - measures depth of a binary tree
 * @tree: binary tree's root node pointer
 * Return: depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t nodeDepth = 0;

	if (tree == NULL)
		return (0);
	while (tree->parent != NULL)
	{
		nodeDepth += 1;
		tree = tree->parent;
	}
	return (nodeDepth);
}
