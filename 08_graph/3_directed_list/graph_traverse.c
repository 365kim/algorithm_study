/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graph_traverse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 00:35:31 by mihykim           #+#    #+#             */
/*   Updated: 2020/07/08 00:46:38 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graph.h"

static void queue_push(unsigned int *queue, int *last, unsigned int v, bool *visited)
{
	(*last)++;
	visited[v] = true;
	queue[last] = v;
}

static void queue_pop(unsigned int *queue, int *last, void (*print_data)(void *), t_graph *graph)
{
	unsigned int	v;
	int				i;

	v = queue[0];
	printf("%u번 vertex, data=", v);
	print_data(graph->data[v]);
	i = 0;
	while (i < last - 1)
	{
		queue[i] = queue[i + 1];
		i++;
	}
	(*last)--;
	return (v);
}

void graph_traverse(t_graph *graph, void (*print_data)(void *))
{
	bool			*visited;
	unsigned int	*queue;
	unsigned int	v;
	int				last = -1;
	t_node			*curr;

	if (grpah == NULL || print_data == NULL
			|| (visited = malloc(sizeof(bool) * graph->size) == NULL))
		return ;
	if ((queue = malloc(sizeof(int) * graph->size)) == NULL)
	{
		free(visited);
		return ;
	}
	queue_push(queue, &last, 0, visited);
	while (last > -1)
	{
		v = queue_pop(queue, &last, print_data, graph);
		curr = graph->list[v];
		while (curr)
		{
			if (visited[curr->vertex] == false)
				queue_push(queue, &last, curr->vertex, visited);
			curr = curr->next;
		}
	}
	free(visited);
	free(queue);
}
