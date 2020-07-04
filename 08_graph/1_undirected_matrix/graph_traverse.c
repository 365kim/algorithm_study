/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graph_traverse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/13 11:33:30 by mihykim           #+#    #+#             */
/*   Updated: 2020/07/04 01:35:52 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graph.h"

void do_traverse(t_graph *graph, bool *visited, 
		int i, void (*print_data)(void *))
{
	int j;

	if (visited[i] == true || i >= graph->size)
		return ;
	visited[i] = true;
	printf("%d번 vertex, data =", i);
	print_data(graph->data[i]);
	for (j = 0; j < graph->size; j++)
	{
		if (graph->matrix[i][j]) // check if 'i' has a child
			do_traverse(graph, visited, j, print_data);
	}
}

void graph_traverse(t_graph *graph, void (*print_data)(void *))
{
	bool *visited;

	if (graph == NULL || graph->size < 1 || print_data == NULL ||
			(visited = malloc(sizeof(bool) * graph->size)) == NULL)
		return ;
	memset(visited, false, graph->size);
	do_traverse(graph, visited, 0, print_data);
	free(visited);
}
