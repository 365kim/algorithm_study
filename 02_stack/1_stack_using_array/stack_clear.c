/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_clear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 01:15:14 by mihykim           #+#    #+#             */
/*   Updated: 2020/03/12 01:27:04 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

/*
** - Remove all data that the given 'stack' has.
** - The data should be freed by the given function 'free data'
*/

void	stack_clear(t_stack *stack, void (*free_data)(void *))
{
	if (stack == 0 || free_data == 0)
		return ;
	while (stack->top_index > -1)
	{
		free_data((stack->data)[stack->top_index]);
		stack->top_index--;
	}
}
