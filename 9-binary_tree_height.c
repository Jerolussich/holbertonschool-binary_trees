#include "binary_trees.h"

/**
* binary_tree_height - get the height of a binary tree
* @tree: the root of a binary tree
* Return: return height or 0 if failed
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
