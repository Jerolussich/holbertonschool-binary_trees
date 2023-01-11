#include "binary_trees.h"

/**
 * binary_tree_is_perfect - check if tree is perfect
 * @tree: binary tree root
 * Return: 1 if tree is perfect else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (binary_tree_size(tree->left) == binary_tree_size(tree->right))
		return (1);
	return (0);
}


/**
 * binary_tree_size - get the size of tree
 * @tree: node to root
 * Return: size of tree or NULL
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
