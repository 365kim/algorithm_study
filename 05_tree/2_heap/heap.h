/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heap.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/10 18:29:46 by mihykim           #+#    #+#             */
/*   Updated: 2020/04/10 21:40:30 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEAP_H
# define HEAP_H

#include <stdlib.h>

# define SUCCESS 1
# define FAIL 0

typedef struct		s_heap
{
	unsigned int	max_size;
	unsigned int	size;
	int				(*cmp)(void *, void *);
	void			**data;
}					t_heap;

t_heap		*heap_init(unsigned int max_size, int (*cmp)(void *, void *));
int			heap_push(t_heap *heap, void *data);
void 		*heap_peek(t_heap *heap);
void		*heap_pop(t_heap *heap);
void		free_heap(t_heap *heap, void (*free_data)(void *));

void		swap(void **a, void **b);
int			min(int a, int b);

#endif
