#include "binary_trees.h"
/**
 * binary_tree_preorder - function that goes through a binary tree using
 * pre-order traversal
 * @tree: pointer to the root node of the tree to print in preorder
 * @func: function pointer
 * If tree is NULL, do nothing
 * Return: Nothing, void function
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	if (tree->right)
		binary_tree_preorder(tree->right, func);
}
