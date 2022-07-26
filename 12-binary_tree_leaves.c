#include "binary_trees.h"
/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * If tree is NULL, your function must return 0
 * Return: leaves of the node of the tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
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
