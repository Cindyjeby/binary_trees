#include "binary_trees.h"
/**
 * binary_tree_balance(const binary_tree_t *tree)
 * @tree: pointer to the root
 * Return: 0 if NULL
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t lefth, righth;

	if (!tree)
		return (0);

	lefth = binary_tree_height(tree->left);
	righth = binary_tree_height(tree->right);

	return (lefth - righth);
}
/**
 * binary_tree_height - function that calculates the height of a binary tree
 * @tree: pointer to the root node
 * Return: 0 on failure
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lefth, righth = 0;

	if (!tree)
		return (0);

	lefth += 1 + binary_tree_height(tree->left);
	righth += 1 + binary_tree_height(tree->right);

	if (lefth > righth)
		return (lefth);

	else
		return (righth);
}
