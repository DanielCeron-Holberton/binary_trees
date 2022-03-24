#include "binary_trees.h"

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->left == node)
	{
		if (!node->parent->right)
			return (NULL);

		return (node->parent->right);
	}
	else
	{
		if (!node->parent->left)
			return (NULL);
		return(node->parent->left);
	}
	return (NULL);
}