/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trie.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 17:25:47 by mihykim           #+#    #+#             */
/*   Updated: 2020/04/13 19:14:19 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TRIE_H
# define TRIE_H

#include <stdbool.h>

typedef struct		s_node
{
	struct s_node	*next[26];
	bool			finish;
}					t_node;

typedef t_node *t_trie[26];

#endif
