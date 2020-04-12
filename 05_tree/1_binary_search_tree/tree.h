/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tree.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/06 13:49:57 by mihykim           #+#    #+#             */
/*   Updated: 2020/04/08 23:26:18 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TREE_H
# define TREE_H

# define LEFT 1
# define RIGHT -1

# define EQUAL 0

# define SUCCESS 1
# define FAIL 0

#include <stdlib.h>

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

t_tree	*tree_init(int (*cmp)(void *, void *));
t_node	*create_elem(void *data);
int     tree_size(t_tree *tree);
t_node	*tree_find(t_tree *tree, void *data_ref);
int     tree_insert(t_tree *tree, void *data);
int     tree_delete(t_tree *tree, void *data_ref, void (*free_data)(void *));
void	free_tree(t_tree *tree, void (*free_data)(void *));

#endif
