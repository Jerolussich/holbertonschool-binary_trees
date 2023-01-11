#include "binary_trees.h"

/**
* binary_tree_height - get the height of a binary tree
* @tree: the root of a binary tree
* Return: return height or 0 if failed
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;
    if (tree == NULL) {
        return 0;
    }
    else {
    	left_height = binary_tree_height(tree->left);
        right_height = binary_tree_height(tree->right);
        if (left_height > right_height)
            return (left_height + 1);
        else 
            return (right_height + 1);
    }
}
