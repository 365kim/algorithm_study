/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_exists.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/31 21:08:32 by mihykim           #+#    #+#             */
/*   Updated: 2020/05/31 23:19:45 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "set.h"

# define EXISTENT 1
# define NON_EXISTENT 0

int	set_exists(t_hash_set *set, void *data, unsigned int data_size)
{
	t_node			*curr;
	unsigned int	i;

	if (set == NULL || data == NULL || data_size == 0)
		return (NON_EXISTENT);
	i = get_hash(data, data_size);
	curr = set->set[i];
	while (curr)
	{
		if (set->cmp(curr->data, data) == 0)
			return (EXISTENT);
		curr = curr->next;
	}
	return (NON_EXISTENT);
}
