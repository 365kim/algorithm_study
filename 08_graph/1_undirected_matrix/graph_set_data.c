/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graph_set_data.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/13 11:14:45 by mihykim           #+#    #+#             */
/*   Updated: 2020/06/13 11:30:20 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graph.h"

bool graph_set_data(t_graph *graph, unsigned int vertex, void *data)
{
	if (graph == NULL || graph->size <= vertex)
		return (false);
	graph->data[vertex] = data;
	return (true);
}
