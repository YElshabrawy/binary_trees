#include "binary_trees.h"

/**
 * binary_tree_sibling - Description of the function
 * @node: Description of the 'node' parameter
 *
 * Return: Description of the return value
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	return (node->parent->left == node ?
	node->parent->right : node->parent->left);
}
