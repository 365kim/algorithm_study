/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graph_get_edge.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/13 11:25:53 by mihykim           #+#    #+#             */
/*   Updated: 2020/06/13 11:27:41 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graph.h"

bool graph_get_edge(t_graph *graph, unsigned int v1, unsigned int v2)
{
	if (graph == NULL || graph->size <= v1 || graph->size <= v2)
		return (false);
	return (graph->matrix[v1][v2]);
}

