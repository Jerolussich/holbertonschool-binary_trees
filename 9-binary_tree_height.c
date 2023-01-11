#include "binary_trees.h"

/**
* binary_tree_height - get the height of a binary tree
* @tree: the root of a binary tree
* Return: return height or 0 if failed
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	int sum = 0, sum_right = 0;

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
	while (tree->left || tree->right)
	{
		if (tree->right)
		{
			sum_right += 1;
			tree = tree->right;
		}
		else if (tree->left)
		{
			sum_right += 1;
			tree = tree->left;
		}
	}
	if (sum > sum_right)
		return (sum);
	else
		return (sum_right);
}
