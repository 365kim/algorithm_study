/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/17 00:05:56 by mihykim           #+#    #+#             */
/*   Updated: 2020/04/17 01:55:04 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "union_find.h"

t_node	*find(t_node *node)
{
	if (node == NULL)
		return (NULL);
//	else if (node->parent == NULL)
//		return (node);
//	return (find(node->parent));
	while (node->parent)
		node = node->parent;
	return (node);
}
