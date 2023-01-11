#include "binary_trees.h"

/**
* binary_tree_insert_left - insert a node in a binary tree or replace one
* @parent: node given to insert
* @value: value given for the node
* Return: NULL if failed or pointer to new node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *Newnode = NULL, *temp = NULL;

	Newnode = create_node(value);
	if (Newnode == NULL)
		return (NULL);

	Newnode->parent = parent;

	if (parent->left == NULL)
	{
		parent->left = Newnode;
	}
	else
	{
		temp = parent->left;
		temp->parent = Newnode;
		parent->left = Newnode;
		Newnode->left = temp;
	}
	return (Newnode);
}

/**
* mycreate_node - function to create a node
* @value: value given for the node
* Return: NULL if failed or pointer to new node
*/

binary_tree_t *mycreate_node(int value)
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
