/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/01 11:07:39 by mihykim           #+#    #+#             */
/*   Updated: 2020/06/01 13:26:14 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_H
# define MAP_H

# define BASE 109
# define BIG_PRIME 1000003

# include <stdlib.h>
# include <string.h>

typedef struct s_node
{
	const char		*key;
	void			*value;
	struct s_node	*next;
}				t_node;

typedef struct s_hash_map
{
	unsigned int	size;
	t_node			**map;
}				t_hash_map;

t_hash_map		*map_init(void);
int				map_insert(t_hash_map *map, const char *key, void *value);
unsigned int	get_hash(const char *key);
void			*map_get(t_hash_map *map, const char *key);
void			*map_delete(t_hash_map *map, const char *key);
void			free_map(t_hash_map *map, void (*free_data)(void *));

#endif
