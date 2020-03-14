/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 13:05:36 by mihykim           #+#    #+#             */
/*   Updated: 2020/03/14 18:38:21 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

#include "stdlib.h"

/* ************************************************************************** */
/*                                STRUCTURE                                   */
/* ************************************************************************** */


typedef struct		s_node
{
	void			*data;
	struct s_node	*next;
}					t_node;

typedef struct		s_stack
{
	unsigned int	size;
	t_node			*top;
}					t_stack;


/* ************************************************************************** */
/*                                PROTOTYPE                                   */
/* ************************************************************************** */

t_stack	*stack_init(void);
t_node	*create_elem(void *data);
		
int		stack_push(t_stack *stack, void *data);
t_node	*stack_peek(t_stack *stack);
int		stack_size(t_stack *stack);

t_node	*stack_pop(t_stack *stack);
void	stack_clear(t_stack *stack, void (*free_data)(void *));
void	free_stack(t_stack *stack, void (*free_data)(void *));

#endif
