#include "binary_trees.h"
/**
 * recursive_depth - recursive_depth
 *
 * @tree: tree
 * Return: size_t
 */
size_t recursive_depth(const binary_tree_t *tree)
{

	if (!tree)
		return (-1);

	return (recursive_depth(tree->parent) + 1);
}

/**
 * binary_tree_depth - binary_tree_depth
 *
 * @tree: tree
 * Return: size_t
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{

	if (!tree)
		return (0);

	return (recursive_depth(tree));
}
