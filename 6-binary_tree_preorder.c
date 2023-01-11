#include "binary_trees.h"

/**
* binary_tree_preorder - print binary in preoder order
* @tree: root node given
* @func: function given by pointer
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;
	if (tree && func)
	{
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
		func(tree->n);
	}
}
