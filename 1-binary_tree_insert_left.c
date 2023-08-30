#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - inserts a node's left child
 * @parent: pointer to parent node
 * @value: left node data
 * Return: left node pointer or NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftNodePtr, *oldLeftPtr;

	leftNodePtr = NULL;
	oldLeftPtr = NULL;

	if (parent == NULL)
		return (NULL);
	leftNodePtr = binary_tree_node(parent, value);
	if (!leftNodePtr)
		return (NULL);
	if (parent->left)
	{
		oldLeftPtr = parent->left;
		oldLeftPtr->parent = leftNodePtr;
		leftNodePtr->left = oldLeftPtr;
	}
	parent->left = leftNodePtr;
	return (leftNodePtr);
}
