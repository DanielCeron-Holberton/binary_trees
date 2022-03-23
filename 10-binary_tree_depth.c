#include "binary_trees.h"

size_t recursive_depth(const binary_tree_t *tree)
{

	if (!tree)
		return (-1);

	return (recursive_depth(tree->parent) + 1);
}

size_t binary_tree_depth(const binary_tree_t *tree)
{

	if (!tree)
		return (0);

	return (recursive_depth(tree));
}
