#include "binary_trees.h"

size_t binary_tree_size_2(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);

	count = binary_tree_size_2(tree->left) + binary_tree_size_2(tree->right);

	return (count + 1);
}

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (binary_tree_size_2(tree->left) == binary_tree_size_2(tree->right))
		return (1);
	return (0);
}