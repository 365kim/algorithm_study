/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graph.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/13 10:47:16 by mihykim           #+#    #+#             */
/*   Updated: 2020/06/13 11:34:37 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRAPH_H
# define GRAPH_H

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

typedef sturct s_graph
{
	unsigned int size;
	void         **data;
	bool         **matrix;
}				t_graph;

 t_graph *graph_init(unsigned int size);
 bool	graph_set_data(t_graph *graph, unsigned int vertex, void *data);
 void	*graph_get_data(t_graph *graph, unsigned int vertex);
 bool	graph_set_edge(t_graph *graph, unsigned int vertex1, unsigned int vertex2, bool state);
 bool	graph_get_edge(t_graph *graph, unsigned int vertex1, unsigned int vertex2);
 void free_graph(t_graph *graph, void (*free_data)(void *));
 void graph_traverse(t_graph *graph, void (*print_data)(void *));
 t_graph	*make_graph(void);

