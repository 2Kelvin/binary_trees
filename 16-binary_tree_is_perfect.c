#include "binary_trees.h"
#include <stdlib.h>

int binary_tree_is_leaf(const binary_tree_t *node);
size_t binary_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_is_perfect - checks if BTree is perfect
 * @tree: binary tree's root node pointer
 * Return: 1 or 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (binary_tree_is_leaf(tree))
		return (1);
	if (binary_tree_height(tree->left) ==
			 binary_tree_height(tree->right))
	{
		if (binary_tree_is_perfect(tree->left) &&
				 binary_tree_is_perfect(tree->right))
			return (1);
	}
	return (0);
}

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: node to check
 * Return: 1 (true) & 0 (false)
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->right == NULL && node->left == NULL)
		return (1);
	else
		return (0);
}

/**
 * binary_tree_height - measures height of a binary tree
 * @tree: binary tree's root node pointer
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftTreeHeight = 0, rightTreeHeight = 0;

	if (tree == NULL || (!tree->right && !tree->left))
		return (0);
	leftTreeHeight = binary_tree_height(tree->left);
	rightTreeHeight = binary_tree_height(tree->right);
	if (leftTreeHeight > rightTreeHeight)
		return (leftTreeHeight + 1);
	else
		return (rightTreeHeight + 1);
}
