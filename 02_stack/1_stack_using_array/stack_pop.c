/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_pop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 00:47:45 by mihykim           #+#    #+#             */
/*   Updated: 2020/03/12 02:15:58 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

/*
** - Store the data on the very top of the given 'stack'
** - Return the data after remove it on the very top of the given 'stack'.
*/

void	*stack_pop(t_stack *stack)
{
	void	*storage;

	if (stack == 0 || stack->data == 0 ||
			stack->max_size == 0 || stack->top_index < 0)
		return (0);
	storage = stack->data[stack->top_index];
	stack->data[stack->top_index] = 0;
	stack->top_index--;
	return (storage);
}

/*
** line 28 : set data[top] to NULL pointer, instead of free(which was not even allocated)
*/ 
