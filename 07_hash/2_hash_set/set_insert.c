/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_insert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/31 20:18:26 by mihykim           #+#    #+#             */
/*   Updated: 2020/05/31 23:23:46 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "set.h"

# define FAILURE 0
# define SUCCESS 1

static t_node	*create_node(void *data)
{
	t_node *node;

	if ((node = malloc(sizeof(t_node))) == NULL)
		return (NULL);
	node->data = data;
	node->next = NULL;
	return (node);
}

int		get_hash(void *data, unsigned int data_size)
{
	unsigned int	hash;
	unsigned int	i;
	char			*temp;

	hash = 0;
	temp = (char *)data;
	i = 0;
	while (i < data_size)
	{
		hash = (hash * BASE) + temp[i];
		hash %= BIG_PRIME;
		i++;
	}
	return (hash);
}

int		set_insert(t_hash_set *set, void *data, unsigned int data_size)
{
	unsigned int	i;
	t_node			*new;
	t_node			*curr;

	if (set == NULL || data == NULL || data_size == 0 
			|| (new = create_node(data)) == NULL)
		return (FAILURE);
	i = get_hash(data, data_size);
	if (set->set[i] == NULL)
		set->set[i] = new;
	else
	{
		curr = set->set[i];
		while (curr)
		{
			if (set->cmp(curr->data, data) == 0)
			{
				free(new);
				return (FAILURE);
			}
			curr = curr->next;
		}
		curr->next = new;
	}
	set->size++;
	return (SUCCESS);
}
