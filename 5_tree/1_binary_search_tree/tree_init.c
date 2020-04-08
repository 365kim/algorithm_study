/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tree_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/08 00:53:55 by mihykim           #+#    #+#             */
/*   Updated: 2020/04/09 00:18:47 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tree.h"

t_tree *tree_init(int (*cmp)(void *, void *))
{
	t_tree *tree;

	if (cmp == NULL || (tree = malloc(sizeof(t_tree))) == NULL)
		return (NULL);
	tree->root = NULL;
	tree->cmp = cmp;
	tree->size = 0;
	return (tree);
}
