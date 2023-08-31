#include "binary_trees.h"
#include <stdlib.h>

/**
  * binary_tree_rotate_right - rotate BTree right
  * @tree: BTree root node
  * Return: root pointer or NULL
  */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *rotTree;

	if (!tree || !tree->left)
		return (NULL);
	rotTree = tree->left;
	tree->left = rotTree->right;
	if (rotTree->right)
		rotTree->right->parent = tree;
	rotTree->right = tree;
	rotTree->parent = tree->parent;
	tree->parent = rotTree;
	return (rotTree);
}
