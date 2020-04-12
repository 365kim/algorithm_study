/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 00:18:33 by mihykim           #+#    #+#             */
/*   Updated: 2020/03/12 02:30:45 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

/*
** - Add the given 'data' on the top of the 'stack'
** - Return 1 if the data is succeccfully added. Otherwise, return 0.
*/

int		stack_push(t_stack *stack, void *data)
{
	if (stack == 0 || stack->data == 0 || stack->max_size == 0 || stack->top_index < -1 || (unsigned int)stack->top_index + 1 >= stack->max_size)
		return (0);
	stack->top_index++;
	(stack->data)[stack->top_index] = data;
	return (1);
}

/*
** add if condition to be 'top + 1 < max_size'
*/
