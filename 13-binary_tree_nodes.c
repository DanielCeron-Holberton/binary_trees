#include "binary_trees.h"
/**
 * binary_tree_nodes - binary_tree_nodes
 *
 * @tree: tree
 * Return: size_t
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
	{
		return (0);
	}

	if (tree->left || tree->right)
		count += binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1;

	return (count);
}
