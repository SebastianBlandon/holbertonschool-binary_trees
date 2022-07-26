#include "binary_trees.h"
/**
 * binary_tree_depth - function that measures the depth of a binary tree
 * @tree: pointer to the root node of the tree to measure the depth.
 * If tree is NULL, your function must return 0
 * Return: depth of tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t counter = 2;

	if (tree->left)
		counter--;

	if (tree->right)
		counter--;

	return (counter);
}
