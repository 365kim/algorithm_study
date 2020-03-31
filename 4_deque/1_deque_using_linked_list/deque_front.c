/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque_front.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 00:04:28 by mihykim           #+#    #+#             */
/*   Updated: 2020/04/01 00:43:49 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "deque.h"

t_node *deque_front(t_deque *deque)
{
	if (deque == NULL)
		return (NULL);
	return (deque->front);
}
