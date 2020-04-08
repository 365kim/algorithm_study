/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tree_find.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/08 01:07:12 by mihykim           #+#    #+#             */
/*   Updated: 2020/04/08 22:50:35 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tree.h"

t_node	*tree_find(t_tree *tree, void *data_ref)
{
	t_node *node;

	if (tree == NULL || tree->root == NULL)
		return (NULL);
	node = tree->root;
	while (node)
	{
		if (tree->cmp(node->data, data_ref) == EQUAL)
			return (node);
		else if (tree->cmp(node->data, data_ref) > 0)
			node = node->left;
		else
			node = node->right;
	}
	return (NULL);
}
