/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/31 23:39:40 by mihykim           #+#    #+#             */
/*   Updated: 2020/03/31 23:40:59 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "deque.h"

t_deque *deque_init(void)
{
	t_deque *deque;
	deque = malloc(sizeof(t_deque));
	if (deque == NULL)
		return (NULL);
	deque->size = 0;
	deque->front = NULL;
	deque->back = NULL;
	return (deque);
}
