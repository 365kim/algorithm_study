/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tree_insert.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/08 01:17:22 by mihykim           #+#    #+#             */
/*   Updated: 2020/04/09 00:22:50 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tree.h"

int	tree_insert(t_tree *tree, void *data)
{
	t_node *curr;
	t_node *new;
	t_node *parent;

	if (tree == NULL || tree->cmp == NULL || (new = create_elem(data)) == NULL)
		return (FAIL);
	curr = tree->root;
	parent = NULL;
	while (curr)
	{
		if (tree->cmp(curr->data, data) == EQUAL)
			return (FAIL);
		parent = curr;
		if (tree->cmp(curr->data, data) > 0)
			curr = curr->left;
		else
			curr = curr->right;
	}
	if (parent == NULL)
		tree->root = new;
	else if (tree->cmp(parent->data, data) > 0)
		parent->left = new;
	else if (tree->cmp(parent->data, data) < 0)
		parent->right = new;
	else
		tree->root = new;
	tree->size++;
	return (SUCCESS);
}
