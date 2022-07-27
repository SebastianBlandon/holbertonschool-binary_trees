#include "binary_trees.h"
/**
 * recursion_depth - function that measures the depth of a node
 * @tree: binary tree
 * @counter: counter
 * Return: counter
 */
size_t recursion_depth(const binary_tree_t *tree, size_t counter)
{
	if (!tree)
		return (counter);

	return (recursion_depth(tree->parent, counter + 1));
}
/**
 * binary_tree_depth - function that measures the depth of a binary tree
 * @tree: pointer to the root node of the tree to measure the depth.
 * If tree is NULL, your function must return 0
 * Return: depth of tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (recursion_depth(tree, 0) - 1);
}
