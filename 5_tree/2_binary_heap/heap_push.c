/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heap_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/10 20:43:16 by mihykim           #+#    #+#             */
/*   Updated: 2020/04/10 21:56:01 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "heap.h"

void swap(void **a, void **b)
{
	void *tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	heap_push(t_heap *heap, void *data)
{
	int i;

	if (heap == NULL || heap->max_size <= heap->size)
		return (FAIL);
	i = ++heap->size;
	heap->data[i] = data;
	while (i/2 && heap->cmp(heap->data[i/2], heap->data[i]) > 0)
	{
		swap(&heap->data[i/2], &heap->data[i]);
		i = i/2;
	}
	return (SUCCESS);
}
