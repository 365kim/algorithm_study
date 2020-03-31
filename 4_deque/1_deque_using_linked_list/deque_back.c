/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque_back.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 00:05:35 by mihykim           #+#    #+#             */
/*   Updated: 2020/04/01 00:08:17 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "deque.h"

t_node *deque_back(t_deque *deque)
{
	if (deque == NULL)
		return (NULL);
	return (deque->back);
}
