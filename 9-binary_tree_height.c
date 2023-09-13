#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree 
 * @tree - is a pointer to the root node of the tree to measure the height.
 *
 * Return: the height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftheight = 0;
	size_t rightheight = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);
	leftheight = binary_tree_height(tree->left);
	rightheight = binary_tree_height(tree->right);

	if (leftheight > rightheight)
		return (leftheight +1);
	else
		return (rightheight +1);
}
