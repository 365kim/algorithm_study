/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque_push_front.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/31 23:42:54 by mihykim           #+#    #+#             */
/*   Updated: 2020/03/31 23:58:19 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "deque.h"

int deque_push_front(t_deque *deque, void *data)
{
	t_node *new;

	if (deque == NULL)
		return (0);
	new = create_elem(data);
	if (new == NULL)
		return (0);
	new->next = deque->front;
	if (deque->size == 0)
		deque->back = new;
	else
		deque->front->prev = new;
	deque->front = new;
	deque->size++;
	return (1);
}
