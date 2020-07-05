/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graph_get_data.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 16:41:25 by mihykim           #+#    #+#             */
/*   Updated: 2020/07/05 16:46:17 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graph.h"

void *graph_get_data(t_graph *graph, unsigned int vertex)
{
	if (graph == NULL || vertex >= graph->size)
		return (NULL);
	return (graph->data[vertex]);
}
