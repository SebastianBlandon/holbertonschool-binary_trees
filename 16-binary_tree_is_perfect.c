#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
 * binary_tree_is_perfect - verify if a tree is perfect
 * @tree: binary tree pointer
 * Return: 1 if is perfect, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);

	left = recursive_height(tree->left);
	right = recursive_height(tree->right);
	if (left == right)
		return (1);
	return (0);
}
