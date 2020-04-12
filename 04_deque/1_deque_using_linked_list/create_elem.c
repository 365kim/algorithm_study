/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_elem.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/31 23:41:07 by mihykim           #+#    #+#             */
/*   Updated: 2020/03/31 23:42:46 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "deque.h"

t_node *create_elem(void *data)
{
	t_node *elem;

	elem = malloc(sizeof(t_node));
	if (elem == NULL)
		return (NULL);
	elem->data = data;
	elem->prev = NULL;
	elem->next = NULL;
	return (elem);
}
