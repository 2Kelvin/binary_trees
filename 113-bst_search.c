#include <stdlib.h>
#include "binary_trees.h"

/**
  * bst_search - search for a value in BST
  * @tree: BST root ptr
  * @value: value to search for
  * Return: node ptr of value or NULL
  */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (!tree)
		return (NULL);
	if (tree->n == value)
		return ((bst_t *)tree);
	if (tree->n > value)
		return (bst_search(tree->left, value));
	return (bst_search(tree->right, value));
}
