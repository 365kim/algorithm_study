/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union_func.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/17 00:13:19 by mihykim           #+#    #+#             */
/*   Updated: 2020/04/17 01:47:16 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "union_find.h"

t_node	*union_func(t_node *node1, t_node *node2)
{
	t_node *node;

	if (node1 == NULL)
		return (node2);
	else if (node2 == NULL)
		return (node1);
	if (is_disjoint(node1, node2) == true)
	{
		node = find(node2);
		node->parent = find(node1);
	}
	return (find(node1));
}
