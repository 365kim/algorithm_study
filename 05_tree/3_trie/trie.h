/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trie.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 17:25:47 by mihykim           #+#    #+#             */
/*   Updated: 2020/04/14 16:02:33 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TRIE_H
# define TRIE_H

#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

# define ALPHABETS 26
# define SAME 0

typedef struct	s_node
{
	struct s_node	*next[26];
	bool            finish;
}				t_node;

typedef t_node *t_trie[26];

t_trie	*trie_init(void);
t_node	*create_elem(void);
bool	trie_insert(t_trie *trie, char *str);
bool	trie_find(t_trie *trie, char *str);
void	free_trie(t_trie *trie);

#endif
