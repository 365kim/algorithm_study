/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_get.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/01 12:54:39 by mihykim           #+#    #+#             */
/*   Updated: 2020/06/01 13:30:32 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

# define NON_EXISTENT 0

void	*map_get(t_hash_map *map, const char *key)
{
	t_node			*curr;
	unsigned int	i;

	if (map == NULL)
		return (NON_EXISTENT);
	i = get_hash(key);
	curr = map->map[i];
	while (curr)
	{
		if (strcmp(curr->key, key) == 0)
			return (curr->value);
		curr = curr->next;
	}
	return (NON_EXISTENT);
}
