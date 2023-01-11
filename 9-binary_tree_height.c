#include "binary_trees.h"

/**
* binary_tree_height - get the height of a binary tree
* @tree: the root of a binary tree
* Return: return height or 0 if failed
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	int leftHeight = -1, rightHeight = -1;
	if (tree == NULL)
		return (0);
	else
	{
		int leftHeight = binary_tree_height(tree->left);
		int rightHeight = binary_tree_height(tree->right);
	if (leftHeight >= rightHeight)
		return (leftHeight + 1);
	else
		return (rightHeight + 1);
	}
}
