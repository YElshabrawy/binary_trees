#include "binary_trees.h"

/**
 * binary_tree_depth - Description of the function
 * @tree: Description of the 'tree' parameter
 *
 * Return: Description of the return value
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t d;

	if (!tree || !tree->parent)
		return (0);
	d = binary_tree_depth(tree->parent);
	return (d + 1);
}
