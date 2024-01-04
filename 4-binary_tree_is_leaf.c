#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Description of the function
 * @node: Description of the 'node' parameter
 *
 * Return: Description of the return value
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	return (!node->left && !node->right ? 1 : 0);
}
