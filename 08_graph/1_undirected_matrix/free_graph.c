/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_graph.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/13 11:30:25 by mihykim           #+#    #+#             */
/*   Updated: 2020/07/04 01:32:23 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graph.h"

void free_graph(t_graph *graph, void (*free_data)(void *))
{
	unsigned int i;

	if (graph == NULL || free_data == NULL)
		return ;
	for (i = 0; i < graph->size; i++)
	{
		free_data(graph->data[i]);
		free(graph->matrix[i]);
	}
	free(graph->data);
	free(graph->matrix);
	free(graph);
}
