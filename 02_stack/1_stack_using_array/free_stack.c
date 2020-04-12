/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 01:21:06 by mihykim           #+#    #+#             */
/*   Updated: 2020/03/12 02:51:58 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

/*
** - Remove all data that the given 'stack' has and free the 'stack->data'
** - The data should be freed by the given function 'free data'
*/ 

void	free_stack(t_stack *stack, void (*free_data)(void *))
{
	if (stack == 0 || free_data == 0)
		return ;
	stack_clear(stack, free_data);
	free(stack->data);
	free(stack);
}

/*
** line 25 : free(stack->data), instead of free(stack)
*/
