/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trie_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 11:56:48 by mihykim           #+#    #+#             */
/*   Updated: 2020/04/14 16:09:35 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "trie.h"

t_trie	*trie_init(void)
{
	t_trie	*trie;
	int     i;

	if ((trie = malloc(sizeof(t_trie))) == NULL)
		return (NULL);
	i = 0;
	while (i < ALPHABETS)
		(*trie)[i++] = 0;
	return (trie);
}
