#include "binary_trees.h"

/**
* binary_tree_depth - get the depth of a node
*@tree: pointer to a node
*Return: return depth of node or null if failed
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int sum = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		sum += 1;
		tree = tree->parent;
	}
	return (sum);
}
