/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queue_pop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 15:58:21 by mihykim           #+#    #+#             */
/*   Updated: 2020/03/26 17:06:32 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "queue.h"

t_node	*queue_pop(t_queue *queue)
{
	t_node *storage;

	if (queue == NULL || queue->size <= 0)
		return (NULL);
	storage = queue->head;
	queue->head = queue->head->next;
	queue->size--;
	if (queue->size == 0)
		queue->tail = NULL;
	return (storage);
}
