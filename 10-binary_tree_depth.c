#include "binary_trees.h"
/**
 * binary_tree_depth - function that measures the depth of a node ina binary tree
 * @tree: pointer to the node to measure the depth
 * Return: 0 if NULL, otherwise depth
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
    if (tree && tree->parent)
    {
        return (1 + binary_tree_depth(tree->parent));
    }
    return (0);
}