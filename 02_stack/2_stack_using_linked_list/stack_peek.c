/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_peek.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 17:58:24 by mihykim           #+#    #+#             */
/*   Updated: 2020/03/14 18:01:58 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

/*
** - Return the node on the top of the given 'stack'
*/

t_node	*stack_peek(t_stack *stack)
{
	if (stack == 0)
		return (0);
	return (stack->top);
}
