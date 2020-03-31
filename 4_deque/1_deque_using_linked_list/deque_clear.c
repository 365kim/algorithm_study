/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque_clear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 00:32:53 by mihykim           #+#    #+#             */
/*   Updated: 2020/04/01 00:43:34 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "deque.h"

void	deque_clear(t_deque *deque, void (*free_data)(void *))
{
	t_node *curr;
	t_node *tmp;

	if (deque == NULL || free_data == NULL)
		return ;
	curr = deque->front;
	while (curr)
	{
		tmp = curr;
		free_data(tmp->data);
		free(tmp);
		curr = curr->next;
		deque->size--;
	}
	deque->front = NULL;
	deque->back = NULL;
}
