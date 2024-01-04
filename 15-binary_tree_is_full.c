#include "binary_trees.h"

/**
 * binary_tree_is_full - Description of the function
 * @tree: Description of the 'tree' parameter
 *
 * Return: Description of the return value
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (1);

	if (!tree->left && !tree->right)
		return (1);

	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	return (0);

}
