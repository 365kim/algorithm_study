/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queue_pop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/24 13:13:57 by mihykim           #+#    #+#             */
/*   Updated: 2020/03/24 15:41:23 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "queue.h"

void	*queue_pop(t_queue *queue)
{
	void	*storage;
	int		i;
	
	if (queue == NULL || queue->data == NULL || queue->last_index < 0)
		return (NULL);
	storage = queue->data[0];
	i = 0;
	while (i < queue->last_index)
	{
		queue->data[i] = queue->data[i + 1];
		i++;
	}
	queue->data[queue->last_index] = 0;
	queue->last_index--;
	return (storage);
}
