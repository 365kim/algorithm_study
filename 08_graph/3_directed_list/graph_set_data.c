/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graph_set_data.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 17:57:04 by mihykim           #+#    #+#             */
/*   Updated: 2020/07/07 17:58:20 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

bool graph_set_data(t_graph *graph, unsigned int vertex, void *data)
{
	if (graph == NULL || vertex >= graph->size)
		return (false);
	graph->data[vertex] = data;
	return (true);
}
