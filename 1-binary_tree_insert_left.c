#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node.
 * @parent: a pointer to the node to insert the left-child in
 * @value: the value to store in the new node.
 *
 * Description: if parent already has a left-childe, the new node must take \
 *                           its place, and the old left-child must be \
 *                           set as the left-child of the new node.
 *
 * Return: a pointer to created node or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	/* declaration of the new node */
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	/* assigning values to the properties of the node */
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = parent->left;
	parent->left = new_node;
	new_node->right = NULL;

	if (new_node->left)
		new_node->left->parent = new_node;
	return (new_node);
}
