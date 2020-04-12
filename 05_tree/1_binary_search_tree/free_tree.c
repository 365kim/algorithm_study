/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_tree.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/08 01:52:46 by mihykim           #+#    #+#             */
/*   Updated: 2020/04/09 00:14:17 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tree.h"

void	free_node(t_tree **tree, t_node *node, void (*free_data)(void *))
{
	if (node)
	{
		free_node(tree, node->left, free_data);
		free_node(tree, node->right, free_data);
		free_data(node->data);
		free(node);
	}
}
void	free_tree(t_tree *tree, void (*free_data)(void *))
{
	if (tree == NULL || free_data == NULL)
		return ;
	free_node(&tree, tree->root, free_data);
	free(tree);
}
