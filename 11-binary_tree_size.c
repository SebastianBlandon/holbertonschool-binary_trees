#include "binary_trees.h"


size_t go_to_binary_tree(const binary_tree_t *tree, size_t counter);


/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size.
 * If tree is NULL, your function must return 0
 * Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	counter += go_to_binary_tree(tree, counter);
	return (counter);
}

/**
 * go_to_binary_tree - function that go to the binary tree
 * @tree: pointer to the root node of the tree
 * @counter: size_t variable
 * If tree is NULL, your function must return 0
 * Return: size of tree
 */
size_t go_to_binary_tree(const binary_tree_t *tree, size_t counter)
{
	if (!tree)
		return (counter);

	counter = go_to_binary_tree(tree->left, counter + 1);
	if (tree->right)
		counter = go_to_binary_tree(tree->right, counter);

	return (counter);
}
