#include "binary_trees.h"

/**
* binary_tree_nodes - count nodes with at least 1 child binary tree
* @tree: binary tree root
* Return: number of nodes found or NULL
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);
	else
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
