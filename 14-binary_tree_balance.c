#include "binary_trees.h"
#include <stdlib.h>

size_t binary_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_balance - measures balance factor
 * @tree: binary tree's root node pointer
 * Return: binary tree balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance = 0;

	if (tree == NULL)
		return (0);
	balance = binary_tree_height(tree->left) -
		 binary_tree_height(tree->right);
	return (balance);
}

/**
 * binary_tree_height - measures height of a binary tree
 * @tree: binary tree's root node pointer
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftTreeHeight = 0, rightTreeHeight = 0;

	if (tree == NULL)
		return (0);
	leftTreeHeight = binary_tree_height(tree->left);
	rightTreeHeight = binary_tree_height(tree->right);
	if (leftTreeHeight > rightTreeHeight)
		return (leftTreeHeight + 1);
	else
		return (rightTreeHeight + 1);
}
