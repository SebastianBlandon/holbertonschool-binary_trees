#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
 * binary_tree_balance - verify if the tree is balance
 * @tree: binary tree
 * Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	left = recursive_height(tree->left);
	right = recursive_height(tree->right);
	return (left - right);
}
