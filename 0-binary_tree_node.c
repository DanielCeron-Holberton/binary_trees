#include "binary_trees.h"

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{

	binary_tree_t *new_node = NULL;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return (NULL);
	}
	if (!value)
	{
		free(new_node);
		fprintf(stderr, "Error: no value");
		return (NULL);
	}

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	/*CREATES ROOT*/
	if (!parent)
	{
		new_node->parent = NULL;
		return (new_node);
	}

	new_node->parent = parent;

	return (new_node);
}