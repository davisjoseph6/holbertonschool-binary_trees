#include "binary_trees.h"
/**
 * binary_tree_insert_left - Inserts a left child node into a binary tree.
 * @parent: Pointer to the parent node.
 * @value: The value to store in the new left child node.
 *
 * Return: A pointer to the newly inserted left child node, or NULL on failure.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (!new_node)
		return (NULL);
	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	parent->left = new_node;
	return (new_node);
}
