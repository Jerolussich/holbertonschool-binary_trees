#include "binary_trees.h"

/**
* binary_tree_node - Creates a binary tree node
* @parent: node given to insert
* @value: value given for the node
* Return: NULL if failed or pointer to new node
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *Newnode = NULL;

	Newnode = malloc(sizeof(binary_tree_t));
	if (!Newnode)
	{
		return (NULL);
	}

	Newnode->parent = NULL;
	Newnode->left = NULL;
	Newnode->right = NULL;
	Newnode->n = value;

	if (!parent)
		return (Newnode);

	else if (value > parent->n)
	{
		Newnode->parent = parent;
		parent->right = Newnode;
	}
	else
	{
		Newnode->parent = parent;
		parent->left = Newnode;
	}
	return (Newnode);
}
