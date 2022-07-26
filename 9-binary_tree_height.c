#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * If tree is NULL, your function must return 0
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (!tree)
		return (0);
	if (tree->left)
		counter++;

	if (tree->right)
		counter++;

	return (counter);
}
