#include "binary_trees.h"

/**
 * binary_tree_is_root - Description of the function
 * @node: Description of the 'node' parameter
 *
 * Return: Description of the return value
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	return (!node->parent ? 1: 0);
}
