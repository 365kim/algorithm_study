/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graph.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 16:26:53 by mihykim           #+#    #+#             */
/*   Updated: 2020/07/05 20:53:52 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRAPH_H
# define GRAPH_H

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct s_node
{
	unsigned int	vertex;
	struct s_node	*next;
}				t_node;

typedef struct s_graph
{
	unsigned int	size;
	void			**data;
	t_node			**list;
}				t_graph;
t_graph	*graph_init(unsigned int size);
bool	graph_set_data(t_graph *graph, unsigned int vertex, void *data);
void	*graph_get_data(t_graph *graph, unsigned int vertex);
bool	graph_set_edge(t_graph *graph, unsigned int v1, unsigned int v2, bool state);
bool	graph_get_edge(t_graph *graph, unsigned int v1, unsigned int v2);
void	free_graph(t_graph *graph, void (*free_data)(void *));
void 	graph_traverse(t_graph *graph, void (*print_data)(void *));

#endif
