#include "binary_trees.h"

int binary_tree_is_leaf(const binary_tree_t *node)
{

	if (!node)
		return (0);

	if (!node->left && !node->right && node->parent)
		return (1);

	return (0);
}
