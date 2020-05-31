/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/31 15:44:58 by mihykim           #+#    #+#             */
/*   Updated: 2020/05/31 23:26:08 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SET_H
# define SET_H

#include <stdlib.h>

# define BASE 109
# define BIG_PRIME 1000003

typedef struct s_node
{
	void			*data;
	struct s_node	*next;
}				t_node;

typedef struct s_hash_set
{
	unsigned int	size;
	t_node			**set;
	int				(*cmp)(void *, void *);
}				t_hash_set;

t_hash_set	*set_init(int (*cmp)(void *, void *));
int			get_hash(void *data, unsigned int data_size);
int			set_insert(t_hash_set *set, void *data, unsigned int data_size);
int			set_exists(t_hash_set *set, void *data, unsigned int data_size);
int			set_delete(t_hash_set *set, void *data, unsigned int data_size,
						void (*free_data)(void *));
void 		free_set(t_hash_set *set, void (*free_data)(void *));

#endif
