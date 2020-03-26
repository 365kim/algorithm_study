/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queue_clear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 16:55:55 by mihykim           #+#    #+#             */
/*   Updated: 2020/03/26 17:08:29 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "queue.h"

void	queue_clear(t_queue *queue, void (*free_data)(void *))
{
	t_node *curr;

	if (queue == NULL || free_data == NULL)
		return ;
	while (queue->size > 0)
	{
		curr = queue->head;
		queue->head = curr->next;
		free_data(curr->data);
		free(curr);
		queue->size--;
	}
	queue->tail = NULL;
}
