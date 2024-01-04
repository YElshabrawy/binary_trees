#include "binary_trees.h"

/**
 * binary_tree_insert_left - Description of the function
 * @parent: Description of the 'parent' parameter
 * @value: Description of the 'value' parameter
 *
 * Return: Description of the return value
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value){
	binary_tree_t* t;
	int tmp;

	if (!parent)
		return (NULL);

	if(!parent->left)
	{
		t = binary_tree_node(parent, value);
		parent->left = t;
		return (t);
	}

	t = binary_tree_node(parent->left, value);
	parent->left->left = t;

	tmp = parent->left->left->n;
	parent->left->left->n = parent->left->n;
	parent->left->n = tmp;
	return(t);
}
