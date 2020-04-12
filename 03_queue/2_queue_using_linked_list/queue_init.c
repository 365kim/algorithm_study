/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queue_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 15:42:42 by mihykim           #+#    #+#             */
/*   Updated: 2020/03/26 17:30:37 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "queue.h"

t_queue	*queue_init(void)
{
	t_queue *queue;

	queue = malloc(sizeof(t_queue));
	if (queue == NULL)
		return (NULL);
	queue->size = 0;
	queue->head = NULL;
	queue->tail = NULL;
	return (queue);
}
