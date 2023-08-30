#include "binary_trees.h"
#include <stdlib.h>

queue *funcQueueNode(binary_tree_t *qnode);
void qfree(queue *h);
void qPush(binary_tree_t *n, queue *h, queue **tl, void (*func)(int));
void qPop(queue **h);

/**
 * funcQueueNode - creates a new queue node
 * @qnode: queue node
 * Return: new queue node
 */
queue *funcQueueNode(binary_tree_t *qnode)
{
	queue *nq = malloc(sizeof(queue));

	if (!nq)
		return (NULL);
	nq->node = qnode;
	nq->nxtNode = NULL;
	return (nq);
}

/**
 * qfree - free queue
 * @h: queue head
 * Return: nothing
 */
void qfree(queue *h)
{
	queue *c;

	while (h)
	{
		c = h->nxtNode;
		free(h);
		h = c;
	}
}

/**
 * qPop - queue head pop
 * @h: head of a queue ptr
 * Return: nothing
 */
void qPop(queue **h)
{
	queue *t;

	t = (*h)->nxtNode;
	free(*h);
	*h = t;
}

/**
 * qPush - push node(s) into queue
 * @n: node to push
 * @h: queue head
 * @tl: queue tail
 * @func: function to run on each node
 * Return: nothing
 */
void qPush(binary_tree_t *n, queue *h, queue **tl, void (*func)(int))
{
	queue *q;

	func(n->n);
	if (n->left)
	{
		q = funcQueueNode(n->left);
		if (!q)
		{
			qfree(h);
			exit(EXIT_FAILURE);
		}
		(*tl)->nxtNode = q;
		*tl = q;
	}
	if (n->right)
	{
		q = funcQueueNode(n->right);
		if (!q)
		{
			qfree(h);
			exit(EXIT_FAILURE);
		}
		(*tl)->nxtNode = q;
		*tl = q;
	}
}

/**
 * binary_tree_levelorder - level order traversal
 * @tree: Btree root node pointer
 * @func: function call on each node
 * Return: nothing
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
}
