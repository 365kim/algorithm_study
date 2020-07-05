/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_graph.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 17:27:56 by mihykim           #+#    #+#             */
/*   Updated: 2020/07/05 20:43:55 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graph.h"

void free_graph(t_graph *graph, void (*free_data)(void *))
{
	t_node			*curr;
	t_node			*temp;
	unsigned int	i;

	if (graph == NULL || free_data == NULL)
		return ;
	for (i = 0; i < graph->size; i++)
	{
		free_data(graph->data[i]);
		curr = graph->list[i];
		while (curr)
		{
			temp = curr;
			curr = curr->next;
			free(temp);
		}
	}
	free(graph->data);
	free(graph->list);
	free(graph);
}
