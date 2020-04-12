/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queue_clear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/24 15:47:12 by mihykim           #+#    #+#             */
/*   Updated: 2020/03/24 15:47:13 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "queue.h"

void	queue_clear(t_queue *queue, void (*free_data)(void *))
{
	if (queue == NULL || free_data == NULL)
		return ;
	while (queue->last_index > -1)
	{
		free_data(queue->data[queue->last_index]);
		queue->last_index--;
	}
}
