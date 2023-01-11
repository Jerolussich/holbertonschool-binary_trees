#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: binary root node
 * Return: 1 if full else 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (1);
	else if (tree->left && tree->right)
	{
		if ((tree->left->left && tree->left->right) &&
		(tree->right->left && tree->right->right))
			return (1);
		if ((!tree->left->left && !tree->left->right) &&
		(!tree->right->left && !tree->right->right))
			return (1);
	}
	return (0);
}
