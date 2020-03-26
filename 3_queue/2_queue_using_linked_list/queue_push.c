/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queue_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 15:52:32 by mihykim           #+#    #+#             */
/*   Updated: 2020/03/26 17:12:13 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "queue.h"

int	queue_push(t_queue *queue, void *data)
{
	t_node *new;

	if (queue == NULL || (new = create_elem(data)) == NULL)
		return (0);
	if (queue->tail == NULL)
	{
		queue->tail = new;
		queue->head = new;
	}
	else
	{
		queue->tail->next = new;
		queue->tail = queue->tail->next;
	}
	queue->size++;
	return (1);
}
