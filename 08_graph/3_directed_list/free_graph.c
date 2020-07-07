/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_graph.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 00:32:49 by mihykim           #+#    #+#             */
/*   Updated: 2020/07/08 00:35:20 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graph.h"

void free_graph(t_graph *graph, void (*free_data)(void *))
{
	t_node *curr;
	t_node *temp;
	int i;

	if (graph == NULL || free_data == NULL)
		return ;
	i = 0;
	while (i < graph->size)
	{
		free_data(graph->data[i]);
		curr = graph->list[i];
		while (curr)
		{
			temp = curr;
			curr = curr->next;
			free(temp);
		}
		i++;
	}
	free(graph->data);
	free(graph->list);
	free(graph);
}
