#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_preorder - pre-order traversal
 * @tree: binary tree root node pointer
 * @func: function to call on each node
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
