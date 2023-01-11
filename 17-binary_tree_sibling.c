#include "binary_trees.h"

/**
 * binary_tree_sibling - fin the silbing node of a node
 * @node: pointer to a node
 * Return: return node if found else NULL
 **/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	int n;
	binary_tree_t *my_node = NULL;

	if (!node || !node->parent)
		return (NULL);

	n = node->n;
	my_node = node->parent;

	if (my_node->left->n == n)
		my_node = my_node->right;
	else
		my_node = my_node->left;
	return (my_node);
}
