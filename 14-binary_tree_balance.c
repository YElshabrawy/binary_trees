#include "binary_trees.h"
#define max(a, b) (((a) > (b)) ? (a) : (b))


/**
 * binary_tree_height_ - Description of the function
 * @tree: Description of the 'tree' parameter
 *
 * Return: Description of the return value
 */
size_t binary_tree_height_(const binary_tree_t *tree)
{
	size_t l, r;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	l = binary_tree_height_(tree->left);
	r = binary_tree_height_(tree->right);
	return (max(l + 1, r + 1));
}


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

	l = tree->left ? binary_tree_height_(tree->left) + 1 : 0;
	r = tree->right ? binary_tree_height_(tree->right) + 1 : 0;

	return (l - r);
}
