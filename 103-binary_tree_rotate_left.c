#include "binary_trees.h"
#include <stdlib.h>

/**
  * binary_tree_rotate_left - rotate BTree left
  * @tree: BTree root node
  * Return: root pointer or NULL
  */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *rotTree;

	if (!tree || !tree->right)
		return (NULL);
	rotTree = tree->right;
	rotTree->left = tree->right;
	if (rotTree->left)
		rotTree->left->parent = tree;
	rotTree->parent = tree->parent;
	rotTree->left = tree;
	rotTree = tree->parent;
	return (rotTree);
}

