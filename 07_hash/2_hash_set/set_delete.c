/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_delete.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/31 21:45:58 by mihykim           #+#    #+#             */
/*   Updated: 2020/05/31 23:01:45 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "set.h"

# define SUCCESS 1
# define FAILURE 0

int		set_delete(t_hash_set *set, void *data, unsigned int data_size, 
						void (*free_data)(void *))
{
	t_node			*curr;
	unsigned int	i;

	if (set == NULL || data == NULL || data_size == 0 || free_data == NULL)
		return (FAILURE);
	i = get_hash(data, data_size);
	curr = set->set[i];
	if (curr == NULL)
		return (SUCCESS);
	if (set->cmp(curr->data, data) == 0)
	{
		set->set[i] = curr->next;
		free_data(curr->data);
		free(curr);
		set->size--;
		return (SUCCESS);
	}
	while (curr->next)
	{
		if (set->cmp(curr->next->data, data) == 0)
		{
			curr->next = curr->next->next;
			free_data(curr->next->data);
			free(curr->next);
			set->size--;
			return (SUCCESS);
		}
		curr = curr->next;
	}
	return (FAILURE);
}
