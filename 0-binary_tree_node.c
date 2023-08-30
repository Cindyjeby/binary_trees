#include "binary_trees.h"
/**
 * binary_trees_node - function that creates a binary tree node
 * @parent: pointer to the parent node
 * @value: value to put in the new node
 * Return: new node or NULL on failure 
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;
	new = malloc(sizeof(binary_tree_t)); /*allocates memory to the root*/

	if (!new) /*checks if allocation was successfull*/
		return (NULL);

	new->parent = parent;
	new->n = value;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
