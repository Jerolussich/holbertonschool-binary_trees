#include "binary_trees.h"

/**
 * binary_tree_balance - measure the balance factor of a binary tree
 * @tree: binary tree root
 * Return: balance of tree or 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);

	if (!tree->right && tree->left)
		left = binary_tree_height(tree);
	else if (tree->right && !tree->left)
		right = binary_tree_height(tree);
	else
	{
		left = binary_tree_height(tree->left);
		right = binary_tree_height(tree->right);
	}
	return (left - right);
}

/**
* binary_tree_height - get the height of a binary tree
* @tree: the root of a binary tree
* Return: return height or 0 if failed
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left || tree->right)
	{
		left_height = binary_tree_height(tree->left) + 1;
		right_height = binary_tree_height(tree->right) + 1;
	}
	if (left_height > right_height)
		return (left_height);
	else
		return (right_height);
}
