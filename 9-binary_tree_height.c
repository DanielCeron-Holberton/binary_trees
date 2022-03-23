#include "binary_trees.h"

size_t max(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}

size_t recursive_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (!tree)
		return (-1);

	left_height = recursive_height(tree->left);
	right_height = recursive_height(tree->right);

	return (max(left_height, right_height) + 1);
}

size_t binary_tree_height(const binary_tree_t *tree)
{

	if (!tree)
		return (0);

	return (recursive_height(tree));
}