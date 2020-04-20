/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heap_pop.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/10 21:03:47 by mihykim           #+#    #+#             */
/*   Updated: 2020/04/20 14:54:12 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "heap.h"

void	*heap_pop(t_heap *heap)
{
	void	*storage;
	int		min_child;
	int		i;

	if (heap == NULL)
		return (NULL);
	storage = heap->data[1];
	swap(&heap->data[1], &heap->data[heap->size]);
	heap->data[heap->size] = NULL;
	heap->size--;
	i = 1;
	while (1)
	{
		if (2 * i > (int)heap->size)
			break ;
		else if (2 * i + 1 > (int)heap->size)
			min_child = 2 * i;
		else
			min_child = heap->cmp(heap->data[2 * i], heap->data[2 * i + 1]) < 0 ?
				(2 * i) : (2 * i + 1);
		if (heap->cmp(heap->data[i], heap->data[min_child]) <= 0)
			break ;
		swap(&heap->data[i], &heap->data[min_child]);
		i = min_child;
	}
	return (storage);
}

/*
** line 30 : changed if condition from '2 * i + 1 >' to '2 * i >'
*/
