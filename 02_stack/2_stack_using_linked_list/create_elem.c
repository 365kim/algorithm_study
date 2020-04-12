/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_elem.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 13:29:23 by mihykim           #+#    #+#             */
/*   Updated: 2020/03/14 18:05:01 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

/*
** - Create a new node with the given 'data'.
*/

t_node	*create_elem(void *data)
{
	t_node	*new;

	new = malloc(sizeof(t_node));
	if (new == 0)
		return (0);
	new->data = data;
	new->next = NULL;
	return (new);
}
