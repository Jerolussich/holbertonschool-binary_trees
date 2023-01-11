#include "binary_trees.h"

/**
 * binary_tree_uncle - find the uncle of a node
 *@node: node given
 * Return: sibling node if found else 0
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	int n = 0;
	binary_tree_t *my_node = NULL;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);


	n = node->parent->n;
	my_node = node->parent->parent;

	if (my_node->left->n == n)
		my_node = my_node->right;
	else
		my_node = my_node->left;
	return (my_node);
}
