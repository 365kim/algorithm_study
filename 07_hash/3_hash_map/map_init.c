/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/01 12:30:16 by mihykim           #+#    #+#             */
/*   Updated: 2020/06/01 13:01:53 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

t_hash_map	*map_init(void)
{
	t_hash_map	*map;
	int			i;

	map = malloc(sizeof(t_hash_map));
	if (map == NULL)
		return (NULL);
	map->map = malloc(sizeof(t_node *) * BIG_PRIME);
	if (map->map == NULL)
	{
		free(map);
		return (NULL);
	}
	i = 0;
	while (i < BIG_PRIME)
	{
		map->map[i] = NULL;
		i++;
	}
	map->size = 0;
	return (map);
}
