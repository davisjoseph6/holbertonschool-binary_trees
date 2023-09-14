#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * in a binary tree
 * @tree: A pointer to the root node of the tree
 * Return: number of nodes with at least 1 child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t size_left = 0, size_right = 0;
	 binary_tree_t *parent = NULL;

	if (tree == NULL)
	{
		return (0);
	}

	if (parent->left == NULL && parent->right == NULL)
	{
	size_left = binary_tree_nodes(tree->left);
	size_right = binary_tree_nodes(tree->right);
	}
	return (size_left + size_right + 1);

}
