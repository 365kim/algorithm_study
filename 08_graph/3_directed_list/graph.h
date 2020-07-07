/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graph.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 14:15:52 by mihykim           #+#    #+#             */
/*   Updated: 2020/07/07 17:46:04 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRAPH_H
# define GRAPH_H

typedef struct	s_node
{
	unsigned int	vertex;
	struct s_node	*next;
}				t_node;

typdef struct	s_graph
{
	unsigned int	size;
	void			**data;
	t_node			**list;
}				t_graph;

#endif
