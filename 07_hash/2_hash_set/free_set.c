/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_set.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/31 22:34:36 by mihykim           #+#    #+#             */
/*   Updated: 2020/05/31 23:18:27 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "set.h"

static void	free_node(t_node *curr, void (*free_data)(void *))
{
	t_node *temp;

	if (curr == NULL)
		return ;
	while (curr)
	{
		temp = curr;
		curr = curr->next;
		free_data(temp);
		free(temp);
	}
}

void		free_set(t_hash_set *set, void (*free_data)(void *))
{
	unsigned int i;

	if (set == NULL || free_data == NULL)
		return ;
	i = 0;
	while (i < BIG_PRIME)
	{
		free_node(set->set[i], free_data);
		set->size--;
		i++;
	}
	free(set);
}
