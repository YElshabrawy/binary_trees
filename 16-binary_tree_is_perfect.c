#include "binary_trees.h"
#define max(a, b) (((a) > (b)) ? (a) : (b))

/**
 * binary_tree_height_2 - Description of the function
 * @tree: Description of the 'tree' parameter
 *
 * Return: Description of the return value
 */
size_t binary_tree_height_2(const binary_tree_t *tree)
{
	size_t l, r;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	l = binary_tree_height_2(tree->left);
	r = binary_tree_height_2(tree->right);
	return (max(l + 1, r + 1));
}

/**
 * binary_tree_is_perfect - Description of the function
 * @tree: Description of the 'tree' parameter
 *
 * Return: Description of the return value
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int h, hl, hr;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	h = binary_tree_height_2(tree);
	hl = tree->left ? binary_tree_height_2(tree->left) + 1 : 0;
	hr = tree->right ? binary_tree_height_2(tree->right) + 1 : 0;

	return ((hl == hr) && (hl == h));
}
