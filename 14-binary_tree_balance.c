#include "binary_trees.h"

size_t max_2(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}

size_t recursive_height_2(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (!tree)
		return (0);

	left_height = recursive_height_2(tree->left);
	right_height = recursive_height_2(tree->right);

	return (max_2(left_height, right_height) + 1);
}

size_t binary_tree_height_2(const binary_tree_t *tree)
{

	if (!tree)
		return (0);
	return (recursive_height_2(tree));
}

int binary_tree_balance(const binary_tree_t *tree)
{

	int count = 0;

	if (!tree)
		return (0);

	count = binary_tree_height_2(tree->left) - binary_tree_height_2(tree->right);

	return (count);
}
