#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as the left-child of another node
 * @parent: pointer to the nodeto insert the left-child
 * @value: the value to store in the new node
 * Return: pointer to created node
 * or NULL on failure
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *firstleft;

	if (!parent)
		return (NULL);

	firstleft = malloc(sizeof(binary_tree_t));
	if (!firstleft)
		return (NULL);

	firstleft->parent = parent;
	firstleft->n = value;
	firstleft->left = parent->left;
	firstleft->right = NULL;
	parent->left = firstleft;

	if (firstleft->left)
	{
		firstleft->left->parent = firstleft;
	}
	return (firstleft)
}
