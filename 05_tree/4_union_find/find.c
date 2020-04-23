/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/17 00:05:56 by mihykim           #+#    #+#             */
/*   Updated: 2020/04/23 12:28:48 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "union_find.h"

t_node	*find(t_node *node)
{
	if (node == NULL)
		return (NULL);
	while (node->parent)
		node = node->parent;
	return (node);
}
