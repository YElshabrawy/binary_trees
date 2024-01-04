#include "binary_trees.h"

/**
 * binary_tree_insert_right - Description of the function
 * @parent: Description of the 'parent' parameter
 * @value: Description of the 'value' parameter
 *
 * Return: Description of the return value
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (!parent)
		return (NULL);
	newNode = binary_tree_node(parent, value);
	if (!newNode)
		return (NULL);
	if (parent->right)
	{
		newNode->right = parent->right;
		parent->right->parent = newNode;
	}
	parent->right = newNode;
	return (newNode);
}
