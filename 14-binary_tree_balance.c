#include "binary_trees.h"

/**
 * binary_tree_balance - Description of the function
 * @tree: Description of the 'tree' parameter
 *
 * Return: Description of the return value
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l, r;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	l = tree->left ? binary_tree_height(tree->left) + 1 : 0;
	r = tree->right ? binary_tree_height(tree->right) + 1 : 0;

	return (l - r);
}
