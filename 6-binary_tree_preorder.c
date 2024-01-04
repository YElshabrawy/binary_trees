#include "binary_trees.h"

/**
 * binary_tree_preorder - Description of the function
 * @tree: Description of the 'tree' parameter
 * @(*func: Description of the '(*func' parameter
 *
 * Return: Description of the return value
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
