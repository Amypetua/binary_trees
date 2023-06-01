#include "binary_trees.h"

/**
 * binary_tree_is_leaf - a function that checks if a node is a leaf
 * @node: a pointer to the node to check
 *
 * Return: return 1 if node is a leaf or return 0 if node is NULL
 * or not a leaf node
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	return ((node == NULL || node->left || node->right) ? 0 : 1);
}
