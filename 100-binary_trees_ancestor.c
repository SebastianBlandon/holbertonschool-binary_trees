#include "binary_trees.h"
/**
 * @brief 
 * 
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
    const binary_tree_t *aux;

    if (!first || !second)
        return (NULL);
    aux = second;
    while (first)
    {
        while(aux)
        {
            if (aux->parent == first->parent)
                return (first->parent);
            aux = aux->parent;
        }
        aux = second;
        first = first->parent;
    }
    return (NULL);
}