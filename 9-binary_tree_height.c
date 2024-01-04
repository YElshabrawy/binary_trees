#include "binary_trees.h"
#define max(a, b) (((a) > (b)) ? (a) : (b))

/**
 * binary_tree_height - Description of the function
 * @tree: Description of the 'tree' parameter
 *
 * Return: Description of the return value
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l, r;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);
	return (max(l + 1, r + 1));
}
