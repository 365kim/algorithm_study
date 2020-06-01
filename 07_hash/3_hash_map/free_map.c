/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/01 13:17:34 by mihykim           #+#    #+#             */
/*   Updated: 2020/06/01 13:22:37 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

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

void		free_map(t_hash_map *map, void (*free_data)(void *))
{
	unsigned int i;

	if (map == NULL || free_data == NULL)
		return ;
	i = 0;
	while (i < BIG_PRIME)
	{
		free_node(map->map[i], free_data);
		map->size--;
		i++;
	}
	free(map);
}
