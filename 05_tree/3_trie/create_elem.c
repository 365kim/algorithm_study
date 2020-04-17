/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_elem.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 13:09:56 by mihykim           #+#    #+#             */
/*   Updated: 2020/04/17 02:22:06 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "trie.h"

t_node	*create_elem(void)
{
	t_node *node;
	int    i;

	if ((node = malloc(sizeof(t_node))) == NULL)
		return (NULL);
	i = 0;
	while (i < ALPHABETS)
		node->next[i++] = NULL;
	node->finish = false;
	return (node);
}
