/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graph_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/13 10:50:38 by mihykim           #+#    #+#             */
/*   Updated: 2020/07/05 16:38:02 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graph.h"

static void init_data_and_matrix(t_graph *graph, unsigned int size)
{
	unsigned int i, j;

	for (i = 0; i < size; i++)
	{
		graph->data[i] = NULL;
		for (j = 0; j < size; j++)
		{
			graph->matrix[i][j] = false;
		}
	}
}

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
	if ((graph->matrix = malloc(sizeof(bool *) * size)) == NULL)
	{
		free(graph->data);
		free(graph);
		return (NULL);
	}
	for (int i = 0; i < size; i++)
	{
		if ((graph->matrix[i] = malloc(sizeof(bool) * size)) == NULL)
		{
			for (int j = 0; j < i; j++)
				free(graph->matrix[j]);
			free(graph->data);
			free(graph->matrix);
			free(graph);
			return (NULL);
		}
	}
	init_data_and_matrix(graph, size);
	return (graph);
}
