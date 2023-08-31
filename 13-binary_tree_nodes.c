#include "binary_trees.h"
/**
 * binary_tree_node - function that counts the node with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree
 * Return: 0 if NULL
 * NULL pointer is not a node
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t onlychild = 0;

	if (tree)
	{
		if (tree->left != NULL || tree->right != NULL)
		{
			onlychild += 1;
		}
		onlychild += 0;
		onlychild += binary_tree_nodes(tree->left);
		onlychild += binary_tree_nodes(tree->right);
	}
	return (onlychild);
}
