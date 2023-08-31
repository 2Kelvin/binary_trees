#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: binary tree's root node pointer
 * Return: size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t leftSize = 0, rightSize = 0, totalSize = 0;

	if (tree == NULL)
		return (0);
	leftSize = binary_tree_size(tree->left);
	rightSize = binary_tree_size(tree->right);
	totalSize = rightSize + leftSize + 1;
	return (totalSize);
}

/**
  * handlerFunc - to help binary_tree_is_complete func
  * @tree: BTree root node ptr
  * @i: index of node
  * @s: node count
  * Retur: 1 or 0
  */
int handlerFunc(const binary_tree_t *tree, size_t i, size_t s)
{
	if (tree == NULL)
		return (1);
	if (i >= s)
		return (0);
	return (handlerFunc(tree->left, (2 * i) + 1, s) &&
			 handlerFunc(tree->right, (2 * i) + 2, s));
}

/**
  * binary_tree_is_complete - check (bool) complete BTree
  * @tree: BTree root node ptr
  * Return: 1 or 0
  */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t ct;

	if (tree == NULL)
		return (0);
	ct = binary_tree_size(tree);
	return (handlerFunc(tree, 0, ct));
}
