/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_delete.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/01 13:01:23 by mihykim           #+#    #+#             */
/*   Updated: 2020/06/01 13:17:28 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

# define SUCCESS 1
# define FAILURE 0

void	*map_delete(t_hash_map *map, const char *key)
{
	t_node			*curr;
	unsigned int	i;

	if (map == NULL)
		return (NULL);
	i = get_hash(key);
	curr = map->map[i];
	if (curr == NULL)
		return (FAILURE);
	if (strcmp(curr->key, key) == 0)
	{
		map->map[i] = curr->next;
		free(curr);
		map->size--;
		return (curr->value);
	}
	while (curr->next)
	{
		if (strcmp(curr->key, key) == 0)
		{
			curr->next = curr->next->next;
			free(curr);
			map->size--;
			return (curr->value);
		}
		curr = curr->next;
	}
	return (NULL);
}
