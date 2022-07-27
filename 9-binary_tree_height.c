#include "binary_trees.h"

/**
 * recursive_height - found recursively height of the tree
 * @tree: binary tree
 * Return: height of the tree
 */

size_t recursive_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (!tree)
	{
		return (0);
	}
	else
	{
		/* compute the depth of each subtree */
		left_height = recursive_height(tree->left);
		right_height = recursive_height(tree->right);

		/* use the larger one */
		if (left_height > right_height)
			return (left_height + 1);
		else
			return (right_height + 1);
	}
}
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * If tree is NULL, your function must return 0
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (recursive_height(tree) - 1);
}
