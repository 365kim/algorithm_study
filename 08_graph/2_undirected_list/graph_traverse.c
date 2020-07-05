/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graph_traverse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 17:31:43 by mihykim           #+#    #+#             */
/*   Updated: 2020/07/05 21:04:08 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graph.h"

static void	stack_push(unsigned int *stack, int *top, unsigned int v, bool *visited)
{
	(*top)++;
	visited[v] = true;
	stack[*top] = v;
}

static int stack_pop(unsigned int *stack, int *top, void (*print_data)(void *), t_graph *graph)
{
	unsigned int v;

	v = stack[*top];
	printf("%d번 vertex, data=", v);
	print_data(graph->data[v]);
	(*top)--;
	return (v);
}

void 		graph_traverse(t_graph *graph, void (*print_data)(void *))
{
	bool			*visited;
	unsigned int	*stack;
	unsigned int	v;
	int 			top = -1;
	t_node			*curr;

	if (graph == NULL || print_data == NULL
			|| (visited = malloc(sizeof(bool) * graph->size)) == NULL)
		return ;
	memset(visited, false, graph->size);
	if ((stack = malloc(sizeof(int) * graph->size)) == NULL)
	{
		free(visited);
		return ;
	}
	stack_push(stack, &top, 0, visited);
	while (top > -1)
	{
		v = stack_pop(stack, &top, print_data, graph);
		curr = graph->list[v];
		while (curr)
		{
			if (visited[curr->vertex] == false)
				stack_push(stack, &top, curr->vertex, visited);
			curr = curr->next;
		}
	}
	free(visited);
	free(stack);
}
