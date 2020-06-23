/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graph_set_edge.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/13 11:19:02 by mihykim           #+#    #+#             */
/*   Updated: 2020/06/13 11:25:36 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graph.h"

bool graph_set_edge(t_graph *graph, unsigned int v1, unsigned v2, bool state)
{
	if (graph == NULL || graph->size <= v1 || graph->size <= v2 || v1 == v2)
		return (false);
	graph->matrix[v1][v2] = state;
	graph->matrix[v2][v1] = state;
	return (true);
}
