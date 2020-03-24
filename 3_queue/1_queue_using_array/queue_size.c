/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queue_size.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/24 13:06:54 by mihykim           #+#    #+#             */
/*   Updated: 2020/03/24 13:11:31 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "queue.h"

int		queue_size(t_queue *queue)
{
	if (queue == NULL || queue->data == NULL || queue->last_index < 0)
		return (0);
	return (queue->last_index + 1);
}
