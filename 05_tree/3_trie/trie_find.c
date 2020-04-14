/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trie_find.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 12:23:51 by mihykim           #+#    #+#             */
/*   Updated: 2020/04/14 13:51:40 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "trie.h"

bool	trie_find(t_trie *trie, char *str)
{
	t_node *curr;
	int		i;
	int		j;

	if (trie == NULL || str == NULL || str[0] == '\0')
		return (false);
	j = str[0] - 'a';
	curr = (*trie)[j];
	if (curr == NULL)
		return (false);
	i = 1;
	while (str[i])
	{
		j = str[i] - 'a';
		if (curr->next[j] == NULL)
			return (false);
		curr = curr->next[j];
		i++;
	}
	return (true);
}
