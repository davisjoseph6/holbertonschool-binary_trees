#include "binary_trees.h"
/**
 * binary_tree_height - Measures height of a binary tree
 * @tree: pointer to the root node of tree to measure the height
 *
 * Return: height of the tree or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height, left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	if (left < right)
		height = right + 1;
	else
		height = left + 1;
	return (height);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: balance factor or  0 if tree null
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (!tree)
		return (0);
	left =  binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	return (left - right);
}
