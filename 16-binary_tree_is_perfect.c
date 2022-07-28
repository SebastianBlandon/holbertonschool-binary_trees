#include "binary_trees.h"
#include "10-binary_tree_depth.c"
#include <stdbool.h>


bool is_perfect(const binary_tree_t *root, int d, int level);
int _depth_(const binary_tree_t *node);


/**
 * binary_tree_is_perfect - verify if a tree is perfect
 * @tree: binary tree pointer
 * Return: 1 if is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth = _depth_(tree);

	if (is_perfect(tree, depth, 0))
		return (1);
	return (0);
}

/**
 * is_perfect - verify if a tree is perfect
 * @root: binary tree pointer
 * @d: int input
 * @level: int input
 * Return: true if is perfect, false otherwise
 */
bool is_perfect(const binary_tree_t *root, int d, int level)
{
	if (root == NULL)
		return (false);

	if (root->left == NULL && root->right == NULL)
		if (d == level + 1)
			return (true);

	if (root->left == NULL || root->right == NULL)
		return (false);

	return (is_perfect(root->left, d, level + 1) &&
			is_perfect(root->right, d, level + 1));
}

/**
 * _depth_ - calculate depth of tree
 * @node: binary tree pointer
 * Return: depth of tree
 */
int _depth_(const binary_tree_t *node)
{
	int d = 0;

	while (node != NULL)
	{
		d++;
		node = node->left;
	}
	return (d);
}
