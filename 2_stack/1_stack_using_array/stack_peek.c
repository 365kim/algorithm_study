/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_peek.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 00:44:10 by mihykim           #+#    #+#             */
/*   Updated: 2020/03/12 02:46:27 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

/*
** - Return the data on the top of the given 'stack'.
*/

void	*stack_peek(t_stack *stack)
{
	if (stack == 0 || stack->max_size == 0 || stack->top_index < 0)
		return (0);
	return (stack->data[stack->top_index]);
}
