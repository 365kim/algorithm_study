/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graph_get_edge.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 00:30:03 by mihykim           #+#    #+#             */
/*   Updated: 2020/07/08 19:27:07 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graph.h"

bool graph_get_edge(t_graph *graph, unsigned int start, unsigned int end)
{
	t_node *curr;

	if (graph == NULL || graph->list == NULL
			|| start >= graph->size || end >= graph->size)
		return (false);
	curr = graph->list[start];
	while (curr)
	{
		if (curr->vertex == end)
			return (true);
		curr = curr->next;
	}
	return (false);
}
