/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   baekjoon_01920_find_number.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/03 17:18:45 by mihykim           #+#    #+#             */
/*   Updated: 2020/06/03 17:54:16 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

# define BASE 109
# define BIG_PRIME 1000003

# define EXISTENT 1
# define NON_EXISTENT 0

typedef struct	s_node
{
	int data;
	struct s_node *next;
}				t_node;

t_node *set[BIG_PRIME] = {0};

long long	get_hash(int data)
{
	long long hash;

	hash = (long long)data;
	if (hash < 0)
		hash *= -1;
	hash *= BASE;
	hash %= BIG_PRIME;
	return (hash);
}

t_node *create_node(int data)
{
	t_node *node;

	node = malloc(sizeof(t_node));
	node->data = data;
	node->next = NULL;
	return (node);
}

void		insert_data_with_hash(int data, long long hash)
{
	t_node *curr;

	if (set[hash] == NULL)
	{
		set[hash] = create_node(data);
		return ;
	}
	curr = set[hash];
	while (curr->next)
		curr = curr->next;
	curr->next = create_node(data);	
}

int			find_data_with_hash(int data, long long hash)
{
	t_node *curr;
	
	curr = set[hash];
	while (curr)
	{
		if (curr->data == data)
			return (EXISTENT);
		curr = curr->next;
	}
	return (NON_EXISTENT);
}

int			main(void)
{
	int n, m, i, data;
	long long hash;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &data);
		hash = get_hash(data);
		insert_data_with_hash(data, hash);
	}
	scanf("%d", &m);
	for (i = 0; i < m; i++)
	{
		scanf("%d", &data);
		hash = get_hash(data);
		printf("%d\n", find_data_with_hash(data, hash));
	}
	return (0);
}
