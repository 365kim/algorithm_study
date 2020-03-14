/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_size.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 17:57:43 by mihykim           #+#    #+#             */
/*   Updated: 2020/03/14 18:04:44 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

/*
** - Return the number of nodes that the given 'stack' has.
*/

int		stack_size(t_stack *stack)
{
	if (stack == 0)
		return (0);
	return (stack->size);
}
