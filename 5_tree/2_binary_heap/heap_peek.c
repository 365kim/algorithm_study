/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heap_peek.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/10 21:02:57 by mihykim           #+#    #+#             */
/*   Updated: 2020/04/10 21:49:46 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "heap.h"

void	*heap_peek(t_heap *heap)
{
	if (heap == NULL || heap->data == NULL || heap->size < 1)
		return (NULL);
	return (heap->data[1]);
}
