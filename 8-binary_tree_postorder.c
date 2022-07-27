#include "binary_trees.h"
/**
 * binary_tree_postorder - function that goes through a binary tree using
 * post-order traversal
 * @tree: pointer to the root node of the tree to print in preorder
 * @func: function pointer
 * If tree is NULL, do nothing
 * Return: Nothing, void function
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	if (tree->right)
		binary_tree_postorder(tree->right, func);
	func(tree->n);
}
