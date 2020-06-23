/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graph_get_data.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/13 11:17:25 by mihykim           #+#    #+#             */
/*   Updated: 2020/06/13 11:18:54 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graph.h"

void	*graph_get_data(t_graph *graph, unsigned int vertext)
{
	if (graph == NULL || graph->size <= vertex)
		return (NULL);
	return (graph->data[vertex]);
}
