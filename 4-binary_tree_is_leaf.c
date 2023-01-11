#include "binary_trees.h"

/**
* binary_tree_is_leaf - function to check if a node is a leaf
* @node: node given
* Return: return 1 if leaf 0 if not
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);

}
