/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queue_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/24 13:03:56 by mihykim           #+#    #+#             */
/*   Updated: 2020/03/24 13:12:09 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "queue.h"

int		queue_push(t_queue *queue, void *data)
{
	if (queue == NULL || queue->data == NULL ||  queue->last_index >= (int)queue->max_size)
		return (0);
	queue->last_index++;
	queue->data[queue->last_index] = data;
	return (1);
}
