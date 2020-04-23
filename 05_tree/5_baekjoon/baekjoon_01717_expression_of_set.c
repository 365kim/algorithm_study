/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   baekjoon_01717_expression_of_set.c                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 12:18:03 by mihykim           #+#    #+#             */
/*   Updated: 2020/04/23 14:01:13 by mihykim          ###   ########.fr       */
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

t_node *init[1000000];

t_node *create_node(int n)
{
	t_node *node;

	node = malloc(sizeof(t_node));
	node->parent = NULL;
	node->key = n;
	return (node);
}

t_node *to_root(t_node *node)
{
	if (node == NULL)
		return (NULL);
	while (node->parent)
		node = node->parent;
	return (node);
}

int is_disjoint(t_node *node1, t_node *node2)
{
	if (node1 == NULL || node2 == NULL)
		return (-1);
	if (to_root(node1) == to_root(node2))
		return (false);
	return (true);
}

void union_node(t_node *node1, t_node *node2)
{
	if (node1 == NULL || node2 == NULL)
		return ;
	if (is_disjoint(node1, node2) == true)
		to_root(node2)->parent = to_root(node1);
}

int main(void)
{
	int N, M;
	int operation, a, b;

	scanf("%d %d", &N, &M);
	while (N--)
		init[N] = create_node(N + 1);
	while (M--)
	{
		scanf("%d %d %d", &operation, &a, &b);
		if (operation == UNION)
			union_node(init[a - 1], init[b - 1]);
		else
		{
			if (is_disjoint(init[a - 1], init[b - 1]))
				printf("NO\n");
			else
				printf("YES\n");
		}
	}
	return (0);
}
