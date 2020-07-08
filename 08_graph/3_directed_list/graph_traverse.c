/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graph_traverse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 00:35:31 by mihykim           #+#    #+#             */
/*   Updated: 2020/07/08 19:17:52 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graph.h"

static void queue_push(unsigned int *queue, int *last, unsigned int v, bool *visited)
{
	(*last)++;
	visited[v] = true;
	queue[*last] = v;
}

static int queue_pop(unsigned int *queue, int *last, void (*print_data)(void *), t_graph *graph)
{
	unsigned int	v;
	int				i;

	v = queue[0];
	printf("%u번 vertex, data=", v);
	print_data(graph->data[v]);
	printf("here2\n");
	i = 0;
	printf("here3\n");
	while (i + 1 < *last)
	{
		queue[i] = queue[i + 1];
		i++;
	}
	printf("here\n");
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

	if (graph == NULL || graph->list == NULL || print_data == NULL
			|| (visited = malloc(sizeof(bool) * graph->size)) == NULL)
		return ;
	if ((queue = malloc(sizeof(int) * graph->size)) == NULL)
	{
		free(visited);
		return ;
	}
	memset(queue, 0, graph->size);
	queue_push(queue, &last, 0, visited);
	while (last > -1)
	{
		v = queue_pop(queue, &last, print_data, graph);
	printf("here a\n");
		curr = graph->list[v];
		while (curr)
		{
			if (visited[curr->vertex] == false)
				queue_push(queue, &last, curr->vertex, visited);
			curr = curr->next;
		}
	}
	printf("here b\n");
	free(visited);
	free(queue);
}
