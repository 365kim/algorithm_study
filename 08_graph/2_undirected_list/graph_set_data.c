/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graph_set_data.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 16:41:25 by mihykim           #+#    #+#             */
/*   Updated: 2020/07/05 16:45:24 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graph.h"

bool graph_set_data(t_graph *graph, unsigned int vertex, void *data)
{
	if (graph == NULL || vertex >= graph->size)
		return (false);
	graph->data[vertex] = data;
	return (true);
}
