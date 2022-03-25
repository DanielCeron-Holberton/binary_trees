#include "binary_trees.h"
/**
 * max - max
 *
 * @a: a
 * @b: b
 * Return: size_t
 */
size_t max(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}
/**
 * recursive_height - recursive_height
 *
 * @tree: tree
 * Return: size_t
 */
size_t recursive_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (!tree)
		return (-1);

	left_height = recursive_height(tree->left);
	right_height = recursive_height(tree->right);

	return (max(left_height, right_height) + 1);
}
/**
 * binary_tree_height - binary_tree_height
 *
 * @tree: tree
 * Return: size_t
 */
size_t binary_tree_height(const binary_tree_t *tree)
{

	if (!tree)
		return (0);

	return (recursive_height(tree));
}
