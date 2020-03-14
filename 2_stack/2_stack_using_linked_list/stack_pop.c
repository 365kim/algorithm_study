/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_pop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 17:59:30 by mihykim           #+#    #+#             */
/*   Updated: 2020/03/14 18:55:40 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

/*
** - Store the data of the 'top' node of the given 'stack'
** - Return the stored data after remove it from the 'stack'
*/

t_node	*stack_pop(t_stack *stack)
{
	t_node *storage;

	if (stack == NULL || stack->size <= 0 || stack->top == NULL)
		return (0);
	storage = stack->top;
	stack->top = stack->top->next;
	storage->next = 0;
	stack->size--;
	return (storage);
}

/*
** line 27-28 : change order to let top be able to follow up the next node
*/
