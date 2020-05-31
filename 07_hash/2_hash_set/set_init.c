/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/31 15:46:54 by mihykim           #+#    #+#             */
/*   Updated: 2020/05/31 22:52:30 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "set.h"

t_hash_set	*set_init(int (*cmp)(void *, void *))
{
	t_hash_set	*set;
	int			i;

	if (cmp == NULL
			|| (set = malloc(sizeof(t_hash_set))) == NULL)
		return (NULL);
	if ((set->set = malloc(sizeof(t_node *) * BIG_PRIME)) == NULL)
	{
		free(set);
		return (NULL);
	}
	set->size = 0;
	i = 0;
	while (i < BIG_PRIME)
	{
		set->set[i] = NULL;
		i++;
	}
	set->cmp = cmp;
	return (set);
}
