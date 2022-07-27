#include "binary_trees.h"
/**
 * binary_tree_inorder - function that goes through a binary tree using
 * in-order traversal
 * @tree: pointer to the root node of the tree to print in preorder
 * @func: function pointer
 * If tree is NULL, do nothing
 * Return: Nothing, void function
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	if (tree->right)
		binary_tree_inorder(tree->right, func);
}
