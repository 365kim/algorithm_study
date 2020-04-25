/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   baekjoon_01717_expression_of_set.c                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 12:18:03 by mihykim           #+#    #+#             */
/*   Updated: 2020/04/25 10:16:32 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** - Write a program that tells how many strings are included in the set S.
** - Operation
**	 "0" : union (output : N/A)
**	 "1" : is_disjoint (output : "YES" or "NO")
** - N : {0}, {1}, ... {n}
**   M : # of operations
** - Input will be like :
**			2 3         <= N M
**			0 1 3		<= union {1} and {3}
**			1 1 7		<= is_disjoint {1} and {7}
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define UNION 0
#define HAS_INTERSECTION 1

typedef struct s_node
{
	struct s_node *parent;
	int           key;
}				t_node;

t_node *init[1000001];

t_node *create_node(int n)
{
	t_node *node;

	node = malloc(sizeof(t_node));
	node->parent = node;
	node->key = n;
	return (node);
}

t_node *to_root(t_node *node)
{
	if (node->parent == node)
		return (node);
	return (node->parent = to_root(node->parent));
}

int is_disjoint(t_node *node1, t_node *node2)
{
	if (to_root(node1) == to_root(node2))
		return (false);
	return (true);
}

void union_node(t_node *node1, t_node *node2)
{
	if (is_disjoint(node1, node2) == true)
		to_root(node2)->parent = to_root(node1);
}

int main(void)
{
	int N, M;
	int operation, a, b;
    int i;

	scanf("%d %d", &N, &M);
	for (i = 0 ; i <= N ; i++)
		init[i] = create_node(i);
    for (i = 0 ; i < M ; i++)
	{
		scanf("%d %d %d", &operation, &a, &b);
		if (operation == UNION)
			union_node(init[a], init[b]);
		else
		{
			if (is_disjoint(init[a], init[b]))
				printf("NO\n");
			else
				printf("YES\n");
		}
	}
	return (0);
}
