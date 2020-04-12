/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque_pop_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 00:26:41 by mihykim           #+#    #+#             */
/*   Updated: 2020/04/01 00:44:25 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "deque.h"

t_node *deque_pop_back(t_deque *deque)
{
	t_node *storage;

	if (deque == NULL || deque->size == 0)
		return (NULL);
	storage = deque->back;
	deque->back = deque->back->prev;
	if (deque->size == 2)
		deque->front->next = NULL;
	if (deque->size == 1)
		deque->front = NULL;
	else
		deque->back->next = NULL;
	deque->size--;
	return (storage);
}
