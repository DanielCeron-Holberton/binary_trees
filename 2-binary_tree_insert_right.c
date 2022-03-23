#include "binary_trees.h"


binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL, *old_right = NULL;

	new_node = binary_tree_node(parent, value);
	
	if (parent->right)
	{
		old_right = parent->right;
		parent->right = new_node;
		new_node->right = old_right;
		old_right->parent = new_node;
	}
	else
	{
		parent->right = new_node;
	}


	return (new_node);
}