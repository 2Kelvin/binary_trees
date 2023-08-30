#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_root - check if node is root
 * @node: the node to check
 * Return: 1 (true) or 0 (false)
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
