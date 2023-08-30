#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_sibling - finds a sibling of a node
 * @node: node to find sibling
 * Return: sibling pointer or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || !node->parent)
		return (NULL);
	if (node == node->parent->right)
		return (node->parent->left);
	return (node->parent->right);
}
