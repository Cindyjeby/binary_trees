#include "binary_trees.h"
/**
 * binary_tree_leaves - function that counts the leaves ina binary tree
 * @tree: pointer to the root node
 * Return: 0 if NULL
 * if NULL pointer is nor a leaf
*/
size_t binary_tree_leaves(const binary_tree_t *tree);
{
	int leave = 0;

	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		leave = 1;

	else
	{
		leave += binary_tree_leaves(tree->right);
		leave += binary_tree_leaves(tree->left);
	}
	return (leave);
}
