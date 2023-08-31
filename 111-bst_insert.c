#include "binary_trees.h"
#include <stdlib.h>

/**
  * bst_insert - inserts a value in a BST
  * @tree: BST root node ptr
  * @value: value to store in node
  * Return: pointer or NULL
  */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *nd = NULL, *p = NULL;

	if (!tree)
		return (NULL);
	nd = binary_tree_node(NULL, value);
	if (!nd)
		return (NULL);
	if (!*tree)
	{
		*tree = nd;
		return (nd);
	}
	p = *tree;
	while (p)
	{
		if (value < p->n)
		{
			if (!p->left)
			{
				p->left = nd;
				nd->parent = p;
				break;
			}
			p = p->left;
		}
		else if (value > p->n)
		{
			if (!p->right)
			{
				p->right = nd;
				nd->parent = p;
				break;
			}
			p = p->right;
		}
		else
		{
			free(nd);
			return (NULL);
		}
	}
	return (nd);
}
