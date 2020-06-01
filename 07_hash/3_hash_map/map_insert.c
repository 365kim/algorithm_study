/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_insert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/01 12:35:58 by mihykim           #+#    #+#             */
/*   Updated: 2020/06/01 13:28:11 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

# define SUCCESS 1
# define FAILURE 0

static			t_node *create_node(const char *key, void *value)
{
	t_node *node;

	node = malloc(sizeof(t_node));
	if (node == NULL)
		return (NULL);
	node->key = key;
	node->value = value;
	node->next = NULL;
	return (node);
}

unsigned int	get_hash(const char *key)
{
	unsigned int i;
	unsigned int hash;

	hash = 0;
	i = 0;
	while (key[i])
	{
		hash = (hash * BASE) + key[i];
		hash %= BIG_PRIME;
		i++;
	}
	return (hash);
}

int				map_insert(t_hash_map *map, const char *key, void *value)
{
	t_node			*new;
	t_node			*curr;
	unsigned int	i;

	if (map == NULL || (new = create_node(key, value)) == NULL)
		return (FAILURE);
	i = get_hash(key);
	if (map->map[i] == NULL)
		map->map[i] = new;
	else
	{
		curr = map->map[i];
		while (curr)
		{
			if (strcmp(curr->key, key) == 0)
			{
				free(new);
				return (FAILURE);
			}
			curr = curr->next;
		}
		curr->next = new;
	}
	map->size++;
	return (SUCCESS);
}
