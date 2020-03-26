/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queue_front.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 15:57:10 by mihykim           #+#    #+#             */
/*   Updated: 2020/03/26 17:30:32 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "queue.h"

t_node *queue_front(t_queue *queue)
{
	if (queue == NULL)
		return (NULL);
	return (queue->head);
}
