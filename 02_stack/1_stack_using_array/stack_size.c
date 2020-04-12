/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_size.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 00:40:15 by mihykim           #+#    #+#             */
/*   Updated: 2020/03/12 00:55:28 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

/*
** - Count and return the number of elements that the given 'stack' has.
*/

int		stack_size(t_stack *stack)
{
	if (stack == 0 || stack->max_size == 0 || stack->top_index < -1)
		return (0);
	return (stack->top_index + 1);
}
