/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 23:48:15 by mihykim           #+#    #+#             */
/*   Updated: 2020/03/12 02:57:14 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

/*
** - Allocate (with malloc) and initialize a new stack with the given max size.
*/

t_stack		*stack_init(unsigned int max_size)
{
	t_stack		*new;

	new = malloc(sizeof(t_stack));
	if (new == 0)
		return (0);
	new->max_size = max_size;
	new->top_index = -1;
	new->data = (void **)malloc(sizeof(void *) * max_size);
	if (new->data == 0)
	{
		free(new);
		return (0);
	}
	return (new);
}

/*
** line 27 : set top_index '-1', instead of '0'
** line 28 : cast malloc to (void **), instead of not casting
** line 28 : malloc size of 'max_size', instead of 'max_size + 1'
** line 31 : free newly allocated stack 'new', too, if new->data fails to allocated
*/
