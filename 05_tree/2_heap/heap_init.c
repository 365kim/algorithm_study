/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heap_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/10 20:30:56 by mihykim           #+#    #+#             */
/*   Updated: 2020/04/10 20:50:42 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "heap.h"

t_heap *heap_init(unsigned int max_size, int (*cmp)(void *, void *))
{
	t_heap *heap;

	if (max_size < 1 || cmp == NULL || (heap = malloc(sizeof(t_heap))) == NULL)
		return (NULL);
	if ((heap->data = malloc(sizeof(void *) * (max_size + 1))) == NULL)
	{
		free(heap);
		return (NULL);
	}
	heap->max_size = max_size;
	heap->size = 0;
	heap->cmp = cmp;
	return (heap);
}

/*
** line 21 : malloc size 'max_size + 1' instead of 'max_size'
*/
