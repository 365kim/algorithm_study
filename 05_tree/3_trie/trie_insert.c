/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trie_insert.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 12:16:17 by mihykim           #+#    #+#             */
/*   Updated: 2020/04/17 11:48:20 by mihykim          ###   ########.fr       */
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
	if ((*trie)[j] == NULL)
			(*trie)[j] = create_elem();
	curr = (*trie)[j];
	i = 1;
	while (str[i])
	{
		j = str[i] - 'a';
		if (curr->next[j] == NULL)
			curr->next[j] = create_elem();
		curr = curr->next[j];
		i++;
	}
	curr->finish = true;
	return (true);
}
