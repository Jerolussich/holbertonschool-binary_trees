#include "binary_trees.h"

/**
* binary_tree_insert_right - insert node in a binary tree right side
* @parent: node that needs insertion
* @value: value given for the node
* Return: NULL if failed or pointer to new node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *Newnode = NULL, *temp = NULL;

	if (!parent)
		return (NULL);
	Newnode = create_node(value);
	if (Newnode == NULL)
		return (NULL);

	Newnode->parent = parent;

	if (parent->right == NULL)
	{
		parent->right = Newnode;
	}
	else
	{
		temp = parent->right;
		temp->parent = Newnode;
		parent->right = Newnode;
		Newnode->right = temp;
	}
	return (Newnode);
}

/**
* create_node - function to create a node
* @value: value given for the node
* Return: NULL if failed or pointer to new node
*/
binary_tree_t *create_node(int value)
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
	return (Newnode);
}
