/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_graph.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 00:01:55 by mihykim           #+#    #+#             */
/*   Updated: 2020/07/04 01:35:12 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graph.h"

static bool	set_vertex(t_graph *graph, unsigned int size)
{
	int i;
	char data[5][3] = {"a0", "b1", "c2", "d3", "e4"};

	for (i = 0; i < size; i++)
	{
		if (!graph_set_data(graph, i, strdup(data[i])))
			return (false);
	}
	return (true);
}

static bool	set_edge(t_graph *graph)
{
	if (!graph_set_edge(graph, 0, 1, true)
		|| !graph_set_edge(graph, 0, 3, true)
		|| !graph_set_edge(graph, 1, 2, true)
		|| !graph_set_edge(graph, 1, 3, true)
		|| !graph_set_edge(graph, 3, 4, true))
		return (false);
	return (true);
}

t_graph		*make_graph(void)
{
	t_graph			*graph;
	char			*data;
	unsigned int	size;

	size = 5;
	if ((graph = graph_init(size)) == NULL)
		return (NULL);
	if (!set_vertex(graph, size) || !set_edge(graph))
	{
		free_graph(graph, free);
		return (NULL);
	}
	return (graph);
}
