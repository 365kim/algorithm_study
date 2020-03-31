/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque_push_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/31 23:58:32 by mihykim           #+#    #+#             */
/*   Updated: 2020/04/01 00:44:53 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "deque.h"

int	deque_push_back(t_deque *deque, void *data)
{
	t_node *new;

	if (deque == NULL)
		return (0);
	new = create_elem(data);
	if (new == NULL)
		return (0);
	new->prev = deque->back;
	if (deque->size == 0)
		deque->front = new;
	else
		deque->back->next = new;
	deque->back = new;
	deque->size++;
	return (1);
}
