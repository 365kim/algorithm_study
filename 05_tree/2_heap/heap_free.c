/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heap_free.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/10 21:24:19 by mihykim           #+#    #+#             */
/*   Updated: 2020/04/10 21:29:01 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "heap.h"

void	free_heap(t_heap *heap, void (*free_data)(void *))
{
	if (heap == NULL || free_data == NULL)
		return ;
	while (heap->size > 0)
	{
		free_data(heap->data[heap->size]);
		heap->size--;
	}
	free(heap->data);
	free(heap);
}
