/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tree_delete.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/08 01:47:27 by mihykim           #+#    #+#             */
/*   Updated: 2020/04/09 01:43:00 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tree.h"

int	tree_delete(t_tree *tree, void *data_ref, void (*free_data)(void *))
{
	t_node	*curr;
	t_node	*parent;
	t_node	*alt;
	t_node	*alt_parent;
	int		dir_curr;
	int		dir_alt;

	if (tree == NULL || tree->root == NULL || free_data == NULL)
		return (FAIL);
	curr = tree->root;
	parent = NULL;
	while (curr)
	{
		if (tree->cmp(curr->data, data_ref) == EQUAL)
			break ;
		parent = curr;
		if (tree->cmp(curr->data, data_ref) > 0)
		{
			dir_curr = LEFT;
			curr = curr->left;
		}
		else
		{
			dir_curr = RIGHT;
			curr = curr->right;
		}
	}
	if (curr == NULL)
		return (FAIL);
	if (curr->left && curr->right)
	{
		dir_alt = dir_curr;
		alt = curr->left;
		alt_parent = parent;
		while (alt->right)
		{
			dir_alt = RIGHT;
			alt_parent = alt;
			alt = alt->right;
		}
		if (alt->left)
			dir_alt == RIGHT ? (alt_parent->right = alt->left) : (alt_parent->left = alt->left);
		else
			dir_alt == RIGHT ? (alt_parent->right = NULL) : (alt_parent->left = NULL);
		if (parent == NULL)
			tree->root = alt;
		else
			dir_curr == LEFT ? (parent->left = alt) : (parent->right = alt);
		if (alt != curr->left)
			alt->left = curr->left;
		alt->right = curr->right;
	}
	else if (curr->left)
		dir_curr == LEFT ? (parent->left = curr->left) : (parent->right = curr->left);
	else if (curr->right)
		dir_curr == LEFT ? (parent->left = curr->right) : (parent->right = curr->right);
	else
		dir_curr == LEFT ? (parent->left = NULL) : (parent->right = NULL);
	free_data(curr->data);
	free(curr);
	tree->size--;
	return (SUCCESS);
}
