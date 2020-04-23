/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_disjoint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/17 00:05:56 by mihykim           #+#    #+#             */
/*   Updated: 2020/04/23 14:06:57 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "union_find.h"

bool	is_disjoint(t_node *node1, t_node *node2)
{
	if (node1 == NULL || node2 == NULL)
		return (true);
	if (find(node1) == find(node2))
		return (false);
	return (true);
}

/*
** line 18 : Changed from 'false' to true,
**           since every set is disjoint from the empty set.
** line 19 : Changed from 'node1->parent == node2->parent'
**           to 'find(node1) == find(node2)'
*/
