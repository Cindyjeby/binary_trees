#include "binary_trees.h"
/**
 * binary_tree_is_leaf - function that checks if a node is a leaf
 * @node: pointer tothe node to check
 * Return: 1 if node is a leaf, otherwise 0
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	else if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
/**
 * binary_tree_height - function that measures the height os a binary tree
 * @tree: pointer to the root
 * Return: 0 if NULL, otherwise height of tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lefth, righth;
	if (tree == NULL || binary_tree_is_leaf(tree))
		return (0);
	lefth = binary_tree_height(tree->left);
	righth = binary_tree_height(tree->right);

	if (righth <= lefth)
		return (lefth + 1);

	return (righth + 1);
}
/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root of the tree
 * Return: 0 if NULL
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	binary_tree_t *left, *right;
	size_t subleft, subright;

	if (tree == NULL)
		return (0);

	left = tree->left;
	right = tree->right;

	if (binary_tree_is_leaf(tree))
		return (1);

	if (left == NULL || right == NULL)
		return (0);

	subright = binary_tree_height(right);
	subleft = binary_tree_height(left);

	if (subright == subleft)
    {
		if (binary_tree_is_perfect(left) && binary_tree_is_perfect(right))
			return (1);
	}
	return (0);
}
