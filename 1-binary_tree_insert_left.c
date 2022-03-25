#include "binary_trees.h"

/**
 * binary_tree_insert_left - binary_tree_insert_left
 *
 * @parent: parent
 * @value: valuec
 * Return: binary_tree_t*
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL, *old_left = NULL;

	new_node = binary_tree_node(parent, value);

	if (parent->left)
	{
		old_left = parent->left;
		parent->left = new_node;
		new_node->left = old_left;
		old_left->parent = new_node;
	}
	else
	{
		parent->left = new_node;
	}

	return (new_node);
}
