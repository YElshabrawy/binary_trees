#include "binary_trees.h"

/**
 * binary_tree_insert_left - Description of the function
 * @parent: Description of the 'parent' parameter
 * @value: Description of the 'value' parameter
 *
 * Return: Description of the return value
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *t;

	if (!parent)
		return (NULL);

	t = binary_tree_node(parent, value);
	if (!t)
		return (NULL);

	if (parent->left)
	{
		t->left = parent->left;
		parent->left->parent = t;
	}
	parent->left = t;
	return (t);
}
