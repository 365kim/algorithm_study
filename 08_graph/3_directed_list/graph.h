/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graph.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 14:15:52 by mihykim           #+#    #+#             */
/*   Updated: 2020/07/08 18:22:19 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRAPH_H
# define GRAPH_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct	s_node
{
	unsigned int	vertex;
	struct s_node	*next;
}				t_node;

typedef struct	s_graph
{
	unsigned int	size;
	void			**data;
	t_node			**list;
}				t_graph;

void	graph_traverse(t_graph *graph, void (*print_data)(void *));
bool	graph_set_edge(t_graph *graph, unsigned int start, unsigned int end, bool state);
bool	graph_set_data(t_graph *graph, unsigned int vertex, void *data);
t_graph	*graph_init(unsigned int size);
bool	graph_get_edge(t_graph *graph, unsigned int start, unsigned int end);
void	*graph_get_data(t_graph *graph, unsigned int vertex);
void	free_graph(t_graph *graph, void (*free_data)(void *));
t_graph	*make_graph(void);

#endif
