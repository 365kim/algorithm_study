/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trie_insert.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 12:16:17 by mihykim           #+#    #+#             */
/*   Updated: 2020/04/14 16:13:06 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "trie.h"

bool trie_insert(t_trie *trie, char *str)
{
	t_node	*curr;
	int     i;
	int     j;

	if (trie == NULL || str == NULL || str[0] == '\0')
		return (false);
	j = str[0] - 'a';
	curr = (*trie)[j];
	if (curr == NULL)
		curr = create_elem();
	i = 1;
	while (str[i])
	{
		j = str[i] - 'a';
		curr = curr->next[j];
		if (curr == NULL)
			curr = create_elem();
		i++;
	}
	curr->finish = true;
	return (true);
}
