/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graph_set_edge.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 00:19:17 by mihykim           #+#    #+#             */
/*   Updated: 2020/07/08 00:56:54 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graph.h"

static t_node *create_node(unsigned int vertex)
{
	t_node *node;

	if ((node = malloc(sizeof(t_node))) == NULL)
		return (NULL);
	node->vertex = vertex;
	node->next = NULL;
	return (node);
}

static bool	add_edge(t_graph *graph, unsigned int start, unsigned int end)
{
	t_node *curr;

	if (graph->list[start] == NULL)
	{
		if ((graph->list[start] = create_node(end)) == NULL)
			return (false);
		return (true);
	}
	curr = graph->list[start];
	if (curr->vertex == end)
		return (true);
	while (curr->next)
	{
		if (curr->next->vertex == end)
			return (true);
		curr = curr->next;
	}
	if ((curr->next = create_node(end)) == NULL)
		return (false);
	return (true);
}

static bool	delete_edge(t_graph *graph, unsigned int start, unsigned int end)
{
	t_node *curr;
	t_node *temp;

	if (graph->list[start] == NULL)
		return (true);
	curr = graph->list[start];
	if (curr->vertex == end)
	{
		temp = curr;
		graph->list[start] = curr->next;
		free(temp);
		return (true);
	}
	while (curr->next)
	{
		if (curr->next->vertex == end)
		{
			temp = curr->next;
			curr->next = curr->next->next;
			free(temp);
			return (true);
		}
		curr = curr->next;
	}
	return (true);
}

bool		graph_set_edge(t_graph *graph, unsigned int start, unsigned int end,
					bool state)
{
	t_node *curr;

	if (graph == NULL || start >= graph->size || end >= graph->size)
		return (false);
	if (state == true)
		return (add_edge(graph, start, end));
	return (delete_edge(graph, start, end));
}
