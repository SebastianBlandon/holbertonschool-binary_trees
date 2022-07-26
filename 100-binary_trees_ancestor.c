#include "binary_trees.h"
/**
 * binary_trees_ancestor - function that finds the lowest
 * common ancestor of two nodes
 * @first: first node
 * @second: second node
 * Return: common ancestor
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	const binary_tree_t *aux;

	if (!first || !second)
		return (NULL);
	aux = second;
	while (first)
	{
		while (aux)
		{
			if (aux->parent == first)
				return (aux->parent);
			aux = aux->parent;
		}
		aux = second;
		first = first->parent;
	}
	return (NULL);
}
