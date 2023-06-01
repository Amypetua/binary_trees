#include "binary_trees.h"

/**
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 *
 * Return: If no common ancestors return NULL, else return common ancestor.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *man, *woman;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	man = first->parent, woman = second->parent;
	if (first == woman || !man || (!man->parent && woman))
		return (binary_trees_ancestor(first, woman));
	else if (man == second || !woman || (!woman->parent && man))
		return (binary_trees_ancestor(man, second));
	return (binary_trees_ancestor(man, woman));
}
