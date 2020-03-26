/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_elem.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 15:50:24 by mihykim           #+#    #+#             */
/*   Updated: 2020/03/26 17:30:04 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "queue.h"

t_node	*create_elem(void *data)
{
	t_node *node;

	node = malloc(sizeof(t_node));
	if (node == NULL)
		return (NULL);
	node->data = data;
	node->next = NULL;
	return (node);
}
