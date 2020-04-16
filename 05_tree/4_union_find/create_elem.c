/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_elem.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 23:52:32 by mihykim           #+#    #+#             */
/*   Updated: 2020/04/17 00:05:34 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "union_find.h"

t_node	*create_elem(void *data)
{
	t_node *node;

	if ((node = malloc(sizeof(t_node))) == NULL)
		return (NULL);
	node->parent = NULL;
	node->data = data;
	return (node);
}
