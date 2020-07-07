/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graph_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 17:46:10 by mihykim           #+#    #+#             */
/*   Updated: 2020/07/07 17:52:03 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graph.h"

t_graph *graph_init(unsigned int size)
{
	t_graph	*graph;
	int		i;

	if (size < 1 || (graph  = malloc(sizeof(t_graph))) == NULL)
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
	while (i < size)
	{
		graph->data[i] = NULL;
		graph->list[i] = NULL;
		i++;
	}
	return (graph);
}
