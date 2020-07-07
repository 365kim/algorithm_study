/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_graph.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 00:47:10 by mihykim           #+#    #+#             */
/*   Updated: 2020/07/08 00:57:13 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graph.h"

void	set_vertex(t_graph *graph, unsigned int size, unsigned int len)
{
	char data[size][len + 1];
	int i;

	i = 0;
	while (i < size)
	{
		data[i][0] = 'a' + i;
		data[i][1] = '0' + i;
		data[i][2] = '\0';
		i++;
	}
	i = 0;
	while (i < size)
	{
		if (!graph_set_data(graph, i, strdup(data[i])))
			return (false);
		i++;
	}
	return (true);
}

void set_edge(t_graph *graph)
{
	if (!graph_set_edge(graph, 0, 0, true)
			|| !graph_set_edge(graph, 0, 1, true)
			|| !graph_set_edge(graph, 0, 3, true)
			|| !graph_set_edge(graph, 1, 2, true)
			|| !graph_set_edge(graph, 1, 3, true)
			|| !graph_set_edge(graph, 2, 4, true)
			|| !graph_set_edge(graph, 3, 0, true)
			|| !graph_set_edge(graph, 4, 2, true)
			|| !graph_set_edge(graph, 4, 3, true))
		return (false);
	return (true);
}

t_graph *make_graph(void)
{
	t_graph			*graph;
	unsigned int	size;
	unsigned int	len;

	size = 5;
	len = 2;
	if ((graph = graph_init(size)) == NULL)
		return (NULL);
	if (set_vertex(graph, size, len) == false || set_edge(graph) == false)
	{
		free_graph(graph, free);
		return (NULL);
	}
	return (grpah);
}
