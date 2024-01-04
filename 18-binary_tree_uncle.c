#include "binary_trees.h"

/**
 * binary_tree_sibling2 - Description of the function
 * @node: Description of the 'node' parameter
 *
 * Return: Description of the return value
 */
binary_tree_t *binary_tree_sibling2(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	return (node->parent->left == node ?
	node->parent->right : node->parent->left);
}

/**
 * binary_tree_uncle - Description of the function
 * @node: Description of the 'node' parameter
 *
 * Return: Description of the return value
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	return (binary_tree_sibling2(node->parent));
}
