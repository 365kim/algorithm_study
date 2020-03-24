/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queue_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/24 13:00:23 by mihykim           #+#    #+#             */
/*   Updated: 2020/03/24 15:53:18 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "queue.h"

t_queue *queue_init(unsigned int max_size)
{
	t_queue *queue;

	queue = malloc(sizeof(t_queue) * max_size);
	if (queue == NULL)
		return (NULL);
	queue->max_size = max_size;
	queue->last_index = -1;
	queue->data = malloc(sizeof(void *) * max_size);
	if (queue->data == NULL)
	{
		free(queue);
		return (NULL);
	}
	return (queue);
}
