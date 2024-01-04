#include "binary_trees.h"

/**
 * binary_tree_delete - Description of the function
 * @tree: Description of the 'tree' parameter
 *
 * Return: Description of the return value
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
