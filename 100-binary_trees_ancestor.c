#include "binary_trees.h"
#include <stdlib.h>

size_t binary_tree_depth(const binary_tree_t *tree);

/**
 * binary_trees_ancestor - finds lowest nodes ancestor
 * @first: first node
 * @second: second node
 * Return: ancestor pointer or NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		 const binary_tree_t *second)
{
	size_t dep1, dep2;

	if (first == NULL || second == NULL)
		return (NULL);
	dep2 = binary_tree_depth(second);
	dep1 = binary_tree_depth(first);
	while (dep2 > dep1)
	{
		second = second->parent;
		dep2 -= 1;
	}
	while (dep1 > dep2)
	{
		first = first->parent;
		dep1 -= 1;
	}
	while (first != NULL && second != NULL)
	{
		if (second == first)
			return ((binary_tree_t *)first);
		second = second->parent;
		first = first->parent;
	}
	return ((binary_tree_t *)first);
}

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
