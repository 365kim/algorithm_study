/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_trie.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 13:24:24 by mihykim           #+#    #+#             */
/*   Updated: 2020/04/17 12:00:48 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "trie.h"

void	free_elem(t_node *node)
{
	int i;

	if (node == NULL)
		return ;
	i = 0;
	while (i < ALPHABETS)
	{
		free_elem(node->next[i]);
		i++;
	}
	free(node);
}

void	free_trie(t_trie *trie)
{
	int     i;

	if (trie == NULL || *trie == NULL)
		return ;
	i = 0;
	while (i < ALPHABETS)
	{
		free_elem((*trie)[i]);
		i++;
	}
	free(trie);
}
