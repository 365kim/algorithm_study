/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque_pop_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 00:08:29 by mihykim           #+#    #+#             */
/*   Updated: 2020/04/01 00:44:33 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "deque.h"

t_node *deque_pop_front(t_deque *deque)
{
	t_node *storage;

	if (deque == NULL || deque->size == 0)
		return (NULL);
	storage = deque->front;
	deque->front = deque->front->next;
	if (deque->size == 2)
		deque->back->prev = NULL;
	if (deque->size == 1)
		deque->back = NULL;
	else
		deque->front->prev = NULL;
	deque->size--;
	return (storage);
}
