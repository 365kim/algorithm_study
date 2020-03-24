/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queue_front.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/24 13:12:27 by mihykim           #+#    #+#             */
/*   Updated: 2020/03/24 15:41:40 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "queue.h"

void	*queue_front(t_queue *queue)
{
	if (queue == NULL || queue->data == NULL || queue->last_index < 0)
		return (NULL);
	return (queue->data[0]);
}
