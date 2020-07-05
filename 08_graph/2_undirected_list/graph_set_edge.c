/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graph_set_edge.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 16:46:43 by mihykim           #+#    #+#             */
/*   Updated: 2020/07/05 21:39:04 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graph.h"

static t_node	*create_node(unsigned int v)
{
	t_node *node;

	if ((node = malloc(sizeof(t_node))) == NULL)
		return (NULL);
	node->vertex = v;
	node->next = NULL;
	return (node);
}

static bool		add_edge(t_graph *graph, unsigned int v1, unsigned int v2)
{
	t_node *curr;

	if (graph->list[v1] == NULL)
	{
		if ((graph->list[v1] = create_node(v2)) == NULL)
			return (false);
		return (true);
	}
	curr = graph->list[v1];
	if (curr->vertex == v2)
		return (true);
	while (curr->next)
	{
		if (curr->next->vertex == v2)
			return (true);
		curr = curr->next;
	}
	if ((curr->next = create_node(v2)) == NULL)
		return (false);
	return (true);
}

static bool		delete_edge(t_graph *graph, unsigned int v1, unsigned int v2)
{
	t_node *curr;
	t_node *temp;

	if (graph->list[v1] == NULL)
		return (true);
	curr = graph->list[v1];
	if (curr->vertex == v2)
	{
		temp = curr;
		graph->list[v1] = curr->next;
		free(temp);
		return (true);
	}
	while (curr->next)
	{
		if (curr->next->vertex == v2)
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

bool			graph_set_edge(t_graph *graph, unsigned int v1, unsigned int v2, 
								bool state)
{
	t_node	*curr;

	if (graph == NULL || v1 >= graph->size || v2 >= graph->size || v1 == v2)
		return (false);
	if (state == true)
		return (add_edge(graph, v1, v2) && add_edge(graph, v2, v1));
	return (delete_edge(graph, v1, v2) && delete_edge(graph, v2, v1));
}
