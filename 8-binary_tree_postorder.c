#include "binary_trees.h"
/**
 * binary_tree_postorder - Traverses a tree in post-order
 * @tree: pointer to the root of the tree
 * @func: function to call on each node (with its value)
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return;

binary_tree_postorder(tree->left, func);
binary_tree_postorder(tree->right, func);
func(tree->n);
}
