#include <stdlib.h>
#include "binary_trees.h"

/**
  * array_to_bst - build BST from array
  * @array: the array
  * @size: number of array elements
  * Return: BST ptr or NULL
  */
bst_t *array_to_bst(int *array, size_t size)
{
	size_t n;
	bst_t *ptrRoot = NULL;

	if (!array)
		return (NULL);
	for (n = 0; n < size; n++)
		bst_insert(&ptrRoot, array[n]);
	return (ptrRoot);
}
