/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 18:29:18 by mihykim           #+#    #+#             */
/*   Updated: 2020/03/14 18:31:49 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	free_stack(t_stack *stack, void (*free_data)(void *))
{
	if (stack == NULL || free_data == NULL || stack->size <= 0 || stack->top == NULL)
		return ;
	stack_clear(stack, free_data);
	free(stack);
}
