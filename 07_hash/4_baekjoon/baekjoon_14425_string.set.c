/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   baekjoon_14425_string.set.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/04 18:16:19 by mihykim           #+#    #+#             */
/*   Updated: 2020/06/04 23:07:19 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

# define BASE 109
# define BIG_PRIME 1000003

typedef struct	s_node
{
	char str[501];
	struct s_node *next;
}				t_node;

t_node *set[BIG_PRIME] = {NULL};
int count = 0;

long	get_hash(char *str)
{
	long hash = 0;
	int i = 0;

	for (i = 0; str[i]; i++)
	{
		hash = hash * BASE + (str[i] - 'a' + 1);
		hash %= BIG_PRIME;
	}
	return (hash);
}

void	*create_node(char *str)
{
	t_node *new;

	new = malloc(sizeof(t_node));
	strcpy(new->str, str);
	new->next = NULL;
	return (new);
}

void	insert_str_with_hash(char *str, long hash)
{
	t_node *curr;

	if (set[hash] == NULL)
	{
		set[hash] = create_node(str);
		return ;
	}
	curr = set[hash];
	while (curr->next)
		curr = curr->next;
	curr->next = create_node(str);
}

void	count_str_with_hash(char *str, long hash)
{
	t_node *curr;

	if (set[hash] == NULL)
		return ;
	curr = set[hash];
	while (curr)
	{
		if (strcmp(curr->str, str) == 0)
		{
			count++;
			return ;
		}
		curr = curr->next;
	}
}

int 	main(void)
{
	char	str[501];
	long	hash;
	int		n, m, i;

	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++)
	{
		scanf("%s", str);
		hash = get_hash(str);
		insert_str_with_hash(str, hash);
	}
	for (i = 0; i < m; i++)
	{
		scanf("%s", str);
		hash = get_hash(str);
		count_str_with_hash(str, hash);
	}
	printf("%d", count);
	return (0);
}
