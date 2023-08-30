#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - inserts a node's right child
 * @parent: pointer to parent node
 * @value: left node data
 * Return: right node pointer or NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rightNodePtr = NULL, *oldRight = NULL;

	if (parent == NULL)
		return (NULL);
	rightNodePtr = binary_tree_node(parent, value);
	if (!rightNodePtr)
		return (NULL);
	if (parent->right)
	{
		oldRight = parent->right;
		oldRight->parent = rightNodePtr;
		rightNodePtr->right = oldRight;
	}
	parent->right = rightNodePtr;
	return (rightNodePtr);
}
