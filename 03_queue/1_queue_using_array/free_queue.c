/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_queue.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/24 15:47:01 by mihykim           #+#    #+#             */
/*   Updated: 2020/03/24 15:49:07 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "queue.h"

void	free_queue(t_queue *queue, void (*free_data)(void *))
{
	if (queue == NULL || free_data == NULL)
		return ;
	queue_clear(queue, free_data);
	free(queue->data);
	free(queue);
}
