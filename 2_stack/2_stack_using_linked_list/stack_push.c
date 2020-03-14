/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 13:30:52 by mihykim           #+#    #+#             */
/*   Updated: 2020/03/14 18:34:37 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

/*
** - Add a new node with 'data' on the top of the 'stack'
** - Return 1 if the data is successfully added. Othersize, return 0.
*/

int		stack_push(t_stack *stack, void *data)
{
	t_node *new;

	if (stack == NULL)
		return (0);
	new = create_elem(data);
	if (new == 0)
		return (0);
	new->next = stack->top;
	stack->top = new;
	stack->size++;
	return (1);
}
