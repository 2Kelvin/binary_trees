#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - creates a binary tree node
 * @parent: newNode's parent pointer
 * @value: new node data
 * Return: new node pointer or NULL
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNodePtr = NULL;

	newNodePtr = malloc(sizeof(binary_tree_t));
	if (newNodePtr == NULL)
		return (NULL);
	newNodePtr->n = value;
	newNodePtr->parent = parent;
	newNodePtr->left = NULL;
	newNodePtr->right = NULL;
	return (newNodePtr);
}
