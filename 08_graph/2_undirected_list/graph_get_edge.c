/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graph_get_edge.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 17:21:03 by mihykim           #+#    #+#             */
/*   Updated: 2020/07/05 21:00:43 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graph.h"

bool graph_get_edge(t_graph *graph, unsigned int v1, unsigned int v2)
{
	t_node *curr;

	if (graph == NULL || v1 >= graph->size || v2 >= graph->size || v1 == v2 ||
			graph->list == NULL || graph->list[v1] == NULL)
		return (false);
	curr = graph->list[v1];
	while (curr)
	{
		if (curr->vertex == v2)
			return (true);
		curr = curr->next;
	}
	return (false);
}
