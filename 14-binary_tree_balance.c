#include "binary_trees.h"

/**
 * binary_tree_height_balance - measure height of a binry tree for balance tree
 * @tree: tree to go through
 *
 * Return: the balanced factor
 */
size_t binary_tree_height_balance(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)

		return (0);

	else
	{
		if (tree)
		{
			left = tree->left ? 1 + binary_tree_height_balance(tree->left) : 1;
			right = tree->right ? 1 + binary_tree_height_balance(tree->right) : 1;
		}
		return ((left > right) ? 1 : right);
	}
}




/**
 * binary_tree_balance - measures the balance factor of a binary.
 * @tree: a pointer to the root node of the tree to measure the balance factor
 *
 * Return: If tree is NULL, return 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0, sum = 0;

	if (tree)
	{
		left = ((int)binary_tree_height_balance(tree->left));
		right = ((int)binary_tree_height_balance(tree->right));
		sum = left - right;
	}
	return (sum);
}
