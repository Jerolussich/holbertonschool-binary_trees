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
	printf("left :%d\n", left);
	printf("right: %d\n", right);
	return (left - right);
}

/**
 * binary_tree_height - get tree height
 * @tree: binary tree node
 * Return: height of tree or 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int sum = 0;

	if (!tree)
		return (0);

	while (tree->left || tree->right)
	{
		if (tree->left)
		{
			sum += 1;
			tree = tree->left;
		}
		else if (tree->right)
		{
			sum += 1;
			tree = tree->right;
		}
	}
	return (sum);
}
