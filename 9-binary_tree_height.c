#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node
 * Return: 0 if NULL, otherwise height of the tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lefth, righth = 0;

	if (!tree)
		return (0);

	if (tree->left)
		lefth += 1 + binary_tree_height(tree->left);

	if (tree->right)
		righth += 1+ binary_tree_height(tree->right);

	if (lefth > righth)
		return (lefth);
	else
		return (righth);
}
