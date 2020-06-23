/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graph_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/13 10:50:38 by mihykim           #+#    #+#             */
/*   Updated: 2020/06/13 11:14:34 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graph.h"

*t_graph *graph_init(unsigned int size)
{
	t_graph *graph;

	if ((graph = malloc(sizeof(t_graph))) == NULL)
		return (NULL);
	graph->size = size;
	if ((graph->data = malloc(sizeof(void *) * size)) == NULL)
	{
		free(graph);
		return (NULL);
	}
	memset(graph->data, NULL, size);
	if ((graph->matrix = malloc(sizeof(bool *) * size)) == NULL)
	{
		free(graph);
		free(graph->data);
		return (NULL);
	}
	for (int i = 0; i < size; i++)
	{
		if ((grpah->matrix[i] = malloc(sizeof(bool) * size)) == NULL)
		{
			for (int j == 0; j < i; j++)
				free(graph->matrix[j]);
			free(graph);
			free(graph->data);
			free(matrix);
			return (NULL);
		}
		memset(matrix[i], false, size);
	}
	return (graph);
}
