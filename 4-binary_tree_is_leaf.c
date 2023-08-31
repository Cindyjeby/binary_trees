#include "binary_trees.h"
/**
 * binary_tree_is_leaf - function that checks if a node ia a leaf
 * @node: pointer to the node to check
 * Return: 1 if node is a leaf, otherwise 0
*/
intbinary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->left != NULL || node->right != NULL)
		return (0);
    return (1);
}
