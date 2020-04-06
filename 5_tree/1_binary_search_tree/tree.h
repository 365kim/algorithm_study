/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tree.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/06 13:49:57 by mihykim           #+#    #+#             */
/*   Updated: 2020/04/06 13:50:46 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TREE_H
# define TREE_H

typedef struct		s_node
{
	void			*data;
	struct s_node	*left;
	struct s_node	*right;
}					t_node;

typedef struct	s_binary_search_tree
{
	t_node		*root;
	int			(*cmp)(void *, void *);
	int			size;
}				t_tree;

#endif
