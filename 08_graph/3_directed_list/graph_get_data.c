/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graph_get_data.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 17:58:30 by mihykim           #+#    #+#             */
/*   Updated: 2020/07/07 17:59:51 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graph.h"

void *graph_get_data(t_graph *graph, unsigned int vertex)
{
	if (graph == NULL || vertex >= graph->size)
		return (NULL);
	return (graph->data[vertex]);
}
