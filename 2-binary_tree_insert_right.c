#include "binary_trees.h"
/**
 * binary_tree_insert_right - function thatinserts a node as the right-child of another node
 * @parent: pointer to the nodetoinsert the right-child
 * @value: value to store in the new node
 * Return: a pointer to the created node
 * or NULL on failure or if parent is NULL
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rightchild;

	rightchild = binary_tree_node(parent, value);

	if (rightchild == NULL || parent == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		rightchild->right = parent->right;
		parent->right->parent = rightchild;
	}
	parent->right = rightchild;

	return (rightchild);
}
