/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graph_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 16:27:23 by mihykim           #+#    #+#             */
/*   Updated: 2020/07/05 20:44:11 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graph.h"

t_graph *graph_init(unsigned int size)
{
	t_graph *graph;

	if (size < 1 || (graph = malloc(sizeof(t_graph))) == NULL)
		return (NULL);
	graph->size = size;
	if ((graph->data = malloc(sizeof(void *) * size)) == NULL)
	{
		free(graph);
		return (NULL);
	}
	if ((graph->list = malloc(sizeof(t_node *) * size)) == NULL)
	{
		free(graph->data);
		free(graph);
		return (NULL);
	}
	for (int i = 0; i < size; i++)
	{
		graph->data[i] = NULL;
		graph->list[i] = NULL;
	}
	return (graph);
}
