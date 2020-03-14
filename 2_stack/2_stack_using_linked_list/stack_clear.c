/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_clear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 18:22:13 by mihykim           #+#    #+#             */
/*   Updated: 2020/03/14 18:53:41 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

/*
** - Remove all nodes of the given 'stack'
** - The data of each node should be freed by the given function 'free_data'
*/ 

void	stack_clear(t_stack *stack, void (*free_data)(void *))
{
	t_node *temp;

	if (stack == NULL || free_data == NULL || stack->top == NULL || stack->size <= 0)
		return ;
	while (stack->top)
	{
		temp = stack->top;
		stack->top = stack->top->next;
		free_data(temp->data);
		stack->size--;
		free(temp);
	}
}

/*
** line 30 : free 'temp->data', not 'stack->top->next
*/
