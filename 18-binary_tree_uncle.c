#include "binary_trees.h"

/**
 * binary_tree_uncle - finds a uncle of a node
 * @node: node to find sibling
 * Return: uncle pointer or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || !node->parent || !node->parent->parent)
		return (NULL);
	if (node->parent == node->parent->parent->right)
		return (node->parent->parent->left);
	return (node->parent->parent->right);
}
