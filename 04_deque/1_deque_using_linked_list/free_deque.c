/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_deque.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 00:37:05 by mihykim           #+#    #+#             */
/*   Updated: 2020/04/01 00:38:18 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "deque.h"

void	free_deque(t_deque *deque, void (*free_data)(void *))
{
	if (deque == NULL || free_data == NULL)
		return ;
	deque_clear(deque, free_data);
	free(deque);
}
